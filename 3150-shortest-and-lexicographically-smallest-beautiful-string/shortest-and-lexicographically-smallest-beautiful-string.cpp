class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string res = "";
        int n = s.size();

        for (int l = 0; l < n; l++) {
            if (s[l] != '1') continue;

            int ones = 0;
            for (int r = l; r < n; r++) {
                if (s[r] == '1') ones++;

                if (ones == k) {
                    string candidate = s.substr(l, r - l + 1);
                    if (res.empty() || candidate.size() < res.size() ||
                       (candidate.size() == res.size() && candidate < res))
                        res = candidate;
                    break;
                }
            }
        }
        return res;
    }
};