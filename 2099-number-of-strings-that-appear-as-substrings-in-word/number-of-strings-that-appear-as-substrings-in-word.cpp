class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int ans = 0;

        for (string str : patterns) {
            if (word.find(str) != string::npos) {
                ans++;
            }
        }

        return ans;
    }
};