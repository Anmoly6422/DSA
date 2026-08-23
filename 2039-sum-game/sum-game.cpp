class Solution {
public:
    bool sumGame(string num) {
        int n = num.size(), half = n / 2;
        int sum1 = 0, sum2 = 0, cnt1 = 0, cnt2 = 0;

        for (int i = 0; i < half; i++) {
            if (num[i] == '?') cnt1++;
            else sum1 += num[i] - '0';
        }

        for (int i = half; i < n; i++) {
            if (num[i] == '?') cnt2++;
            else sum2 += num[i] - '0';
        }

        int totalQ = cnt1 + cnt2;
        if (totalQ % 2 == 1) return true;

        return 2 * (sum1 - sum2) != 9 * (cnt2 - cnt1);
    }
};