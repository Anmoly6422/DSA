class Solution {
public:
    string minWindow(string s, string t) {

        unordered_map<char, int> mp;

        // Store frequency of characters in t
        for (char c : t)
            mp[c]++;

        int left = 0;
        int count = 0;

        int minLen = INT_MAX;
        int start = 0;

        for (int right = 0; right < s.size(); right++) {

            // If current character is needed
            if (mp[s[right]] > 0)
                count++;

            // Decrease its frequency
            mp[s[right]]--;

            // Window is valid
            while (count == t.size()) {

                // Update answer
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }

                // Remove left character
                mp[s[left]]++;

                // If it becomes needed again,
                // window is no longer valid
                if (mp[s[left]] > 0)
                    count--;

                left++;
            }
        }

        if (minLen == INT_MAX)
            return "";

        return s.substr(start, minLen);
    }
};