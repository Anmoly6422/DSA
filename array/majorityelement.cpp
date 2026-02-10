#include <iostream>
#include <vector>
using namespace std;

vector<int> majority(vector<int> &arr, int n)
{
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        bool alreadyPresent = false;

        for (int x : ans)
        {
            if (x == arr[i])
            {
                alreadyPresent = true;
                break;
            }
        }
        if (alreadyPresent)
            continue;

        
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count > n / 3)
        {
            ans.push_back(arr[i]);
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 3, 1, 1, 2, 1, 2};
    int n = arr.size();

    vector<int> result = majority(arr, n);
    for (int i : result)
    {
        cout << i << " ";
    }
    return 0;
}
