#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> triplet(int n, vector<int> &a)
{
    vector<vector<int>> ans;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && a[i] == a[i - 1])
            continue;
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            int sum = a[i] + a[j] + a[k];
            if (sum < 0)
                j++;
            else if (sum > 0)
                k--;
            else
            {
                vector<int> temp = {a[i], a[j], a[k]};
                ans.push_back(temp);
                j++;
                k--;
                while (j < k && a[j] == a[j - 1])
                    j++;
                while (j < k && a[k] == a[k + 1])
                    k--;
            }
        }
    }
    return ans;
}
int main(){
    vector<int> a={-1,0,1,2,-1,-4};
    int n=6;
    vector <vector<int>> result=triplet(n,a);
    for(auto i:result){
        for(int r:i){
        cout<<r<<" ";}
        cout<<endl;
    
    }
    return 0;

    }
