#include<iostream>
#include<vector>
using namespace std;
int countinversion(vector<int> &a)
{
    int cnt=0;
    for(int i=0;i<a.size();i++){
        for (int j=i+1;j<a.size();j++){
            if(a[i]>a[j]){
                cnt++;
            }
        }
    }
    return cnt;
}
int main(){
    vector <int> a={5,3,2,4,1};
    cout<<countinversion(a);
    return 0;
}