class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        if (p.size() > s.size())
            return ans;

        vector<int> freqP(26, 0);
        vector<int> window(26, 0);

        // Build frequency arrays
        for (int i = 0; i < p.size(); i++) {
            freqP[p[i] - 'a']++;
            window[s[i] - 'a']++;
        }

        // Check first window
        if (freqP == window)
            ans.push_back(0);

        // Slide the window
        for (int i = p.size(); i < s.size(); i++) {

            window[s[i] - 'a']++;              // Add new character
            window[s[i - p.size()] - 'a']--;   // Remove old character

            if (freqP == window)
                ans.push_back(i - p.size() + 1);
        }

        return ans;
    }
};