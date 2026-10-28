class Solution {
public:
    vector<string> maxNumOfSubstrings(string s) {
        int n = s.size();

        vector<int> first(26, n);
        vector<int> last(26, -1);

        // Find first and last occurrence of every character
        for (int i = 0; i < n; i++) {
            int ch = s[i] - 'a';

            if (first[ch] == n) {
                first[ch] = i;
            }

            last[ch] = i;
        }

        vector<pair<int, int>> intervals;

        // Build all valid intervals
        for (int ch = 0; ch < 26; ch++) {
            if (last[ch] == -1) {
                continue;
            }

            int start = first[ch];
            int end = last[ch];

            bool valid = true;

            for (int i = start; i <= end; i++) {
                int current = s[i] - 'a';

                if (first[current] < start) {
                    valid = false;
                    break;
                }

                end = max(end, last[current]);
            }

            if (valid) {
                intervals.push_back({start, end});
            }
        }

        // Sort by ending position
        sort(intervals.begin(), intervals.end(),
             [](const pair<int, int>& a, const pair<int, int>& b) {
                 if (a.second != b.second) {
                     return a.second < b.second;
                 }

                 return (a.second - a.first) < (b.second - b.first);
             });

        vector<string> answer;
        int previousEnd = -1;

        // Greedily select non-overlapping intervals
        for (auto& interval : intervals) {
            int start = interval.first;
            int end = interval.second;

            if (start > previousEnd) {
                answer.push_back(s.substr(start, end - start + 1));
                previousEnd = end;
            }
        }

        return answer;
    }
};