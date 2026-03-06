#include <iostream>
#include<vector>
using namespace std;

int longestSubarrayWithSumK(vector<int>& arr, int k) {
    int left = 0, right = 0;
    int sum = 0, maxLen = 0;
    int n = arr.size();

    while (right < n) {
        sum += arr[right];
        while (sum > k && left <= right) {
            sum -= arr[left];
            left++;
        }
        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
    }
    return maxLen;
}

int main() {
    vector<int> arr = {4, 1, 1, 1, 2, 3, 5};
    int k = 5;
    cout << "Length of longest subarray: " << longestSubarrayWithSumK(arr, k) << endl;
    return 0;
}
