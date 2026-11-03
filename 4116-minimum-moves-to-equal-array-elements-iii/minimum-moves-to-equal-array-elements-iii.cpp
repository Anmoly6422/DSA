class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int max_index = 0;

        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[max_index]) {
                max_index = i;
            }
        }

        int moves = 0;

        for (int i = 0; i < n; i++) {
            moves += nums[max_index] - nums[i];
        }

        return moves;
    }
};