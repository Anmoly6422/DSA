#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
vector<int> superiorelement(vector<int> &a)
{
    vector<int> ans;
    int maxi = INT_MIN;
    int n = a.size();
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] > maxi)
        {
            ans.push_back(a[i]);
        }
        maxi = max(maxi, a[i]);
    }
    sort(ans.begin(), ans.end());
    return ans;
}
int main()
{
    vector<int> a = {10, 22, 12, 3, 0, 6};
    vector<int> result = superiorelement(a);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}