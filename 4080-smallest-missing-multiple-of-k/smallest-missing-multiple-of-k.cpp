class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> seen(nums.begin(), nums.end());

        int multiple = k;

        while (seen.count(multiple)) {
            multiple += k;
        }

        return multiple;
    }
};