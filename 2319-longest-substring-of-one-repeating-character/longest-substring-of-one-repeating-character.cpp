#include <memory_resource>

class Solution {
    pmr::unsynchronized_pool_resource pool;
    pmr::set<int> boundaries{&pool}, lengths{&pool};
    vector<int> count;

public:
    vector<int> longestRepeating(string s, string chars, vector<int>& indices) {
        int n = s.size();

        boundaries.clear();
        lengths.clear();
        count.resize(n + 1);

        auto addlen = [&](int len) {
            if (++count[len] == 1)
                lengths.insert(len);
        };

        auto removelen = [&](int len) {
            if (--count[len] == 0)
                lengths.erase(len);
        };

        boundaries.insert(0);
        boundaries.insert(n);
        int prev = 0;
        for (int i = 1; i < n; ++i) {
            if (s[i - 1] != s[i]) {
                boundaries.insert(i);
                addlen(i - prev);
                prev = i;
            }
        }
        addlen(n - prev);

        auto update = [&](int i, bool set) {
            if (set) {
                auto it = boundaries.lower_bound(i);
                int next = *it;
                int prev = *std::prev(it);
                removelen(next - prev);
                addlen(i - prev);
                addlen(next - i);
                boundaries.insert(i);
            } else {
                auto it = boundaries.find(i);
                int prev = *std::prev(it);
                int next = *std::next(it);
                removelen(i - prev);
                removelen(next - i);
                addlen(next - prev);
                boundaries.erase(it);
            }
        };

        for (int i = 0; i < indices.size(); ++i) {
            int idx = indices[i];
            char c = chars[i];
            if (idx > 0) {
                bool old = s[idx - 1] != s[idx];
                bool now = s[idx - 1] != c;
                if (old != now)
                    update(idx, now);
            }
            if (idx + 1 < n) {
                bool old = s[idx] != s[idx + 1];
                bool now = c != s[idx + 1];
                if (old != now)
                    update(idx + 1, now);
            }
            s[idx] = c;
            indices[i] = *lengths.rbegin();
        }

        return move(indices);
    }
};