class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> freq(3, 0);

        int left = 0, res = 0;
        int n = s.size();

        for (int i = 0; i < n; i++) {
            freq[s[i] - 'a']++;

            while (freq[0] > 0 && freq[1] > 0 && freq[2] > 0) {
                res += n - i;
                freq[s[left] - 'a']--;
                left++;
            }
        }

        return res;
    }
};