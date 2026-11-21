 class Solution {
public:
    vector<int> findSubtreeSizes(vector<int>& parent, string s) {
        int n = parent.size();
        vector<vector<int>> adj(n);
        for (int i = 1; i < n; i++) {
            adj[parent[i]].push_back(i);
        }

        vector<int> new_parent = parent;
        vector<int> char_ancestor(26, -1);

        auto dfs1 = [&](auto& self, int u) -> void {
            int c = s[u] - 'a';
            int prev = char_ancestor[c];
            if (prev != -1) {
                new_parent[u] = prev;
            }
            char_ancestor[c] = u;

            for (int v : adj[u]) {
                self(self, v);
            }

            char_ancestor[c] = prev;
        };

        dfs1(dfs1, 0);

        vector<vector<int>> new_adj(n);
        for (int i = 1; i < n; i++) {
            new_adj[new_parent[i]].push_back(i);
        }

        vector<int> subtree_size(n, 0);
        auto dfs2 = [&](auto& self, int u) -> int {
            int sz = 1;
            for (int v : new_adj[u]) {
                sz += self(self, v);
            }
            return subtree_size[u] = sz;
        };

        dfs2(dfs2, 0);
        return subtree_size;
    }
};
        
    