#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> foursum(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        for (int j = i + 1; j < n; j++)
        {
            if (j != i + 1 && nums[j] == nums[j - 1])
                continue;
            int k = j + 1;
            int l = n - 1;
            while (k < l)
            {
                long long sum = nums[i];
                sum += nums[j];
                sum += nums[k];
                sum += nums[l];
                if (sum == target)
                {
                    vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                    ans.push_back(temp);
                    k++, l--;
                    while (k < l && nums[k] == nums[k - 1])
                       k++ ;
                    while (k < l && nums[l] == nums[l - 1])
                      l--  ;
                }
                else if (sum < target)
                {
                    k++;
                }
                else
                    l--;
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 5, 2, 3, 1, 4, 3, 2, 1, 2};
    int target = 8;
    vector<vector<int>> result = foursum(nums, target);
    for (auto i : result)
    {
        for (int r : i)
        {
            cout << r << " ";
           
        }
         cout << endl;
    }
    return 0;
}