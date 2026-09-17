class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {

        int n = arr.size();
        int INF = n + 1;

        vector<int> dp(n, INF);

        int left = 0;
        int sum = 0;
        int ans = INF;

        for (int right = 0; right < n; right++) {

            sum += arr[right];

            while (sum > target) {
                sum -= arr[left];
                left++;
            }

            if (sum == target) {

                int len = right - left + 1;

                if (left > 0 && dp[left - 1] != INF) {
                    ans = min(ans, len + dp[left - 1]);
                }

                dp[right] = len;
            }

            if (right > 0) {
                dp[right] = min(dp[right], dp[right - 1]);
            }
        }

        return ans == INF ? -1 : ans;
    }
};