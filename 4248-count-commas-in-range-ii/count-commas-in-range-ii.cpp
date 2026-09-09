class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;
        long long base = 1000;

        while (base <= n) {
            ans += (n - base + 1);

            
            if (base > LLONG_MAX / 1000) break;

            base *= 1000;
        }

        return ans;
    }
};