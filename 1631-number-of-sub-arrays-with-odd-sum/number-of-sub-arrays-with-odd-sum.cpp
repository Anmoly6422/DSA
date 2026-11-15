class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int MOD = 1000000007;
        long long even = 1, odd = 0, ans = 0;
        int parity = 0;
        for (int x : arr) {
            parity ^= (x & 1);
            if (parity == 1) {
                ans = (ans + even) % MOD;
                odd++;
            } else {
                ans = (ans + odd) % MOD;
                even++;
            }
        }
        return (int) ans;
    }
};