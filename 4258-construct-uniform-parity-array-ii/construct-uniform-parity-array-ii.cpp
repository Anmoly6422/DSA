class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mini_even = INT_MAX;
        int mini_odd = INT_MAX;

        for (int x : nums1) {
            if (x % 2 == 1) {
                mini_odd = min(mini_odd, x);
            } else {
                mini_even = min(mini_even, x);
            }
        }

     
        if (mini_odd != INT_MAX &&
            mini_even != INT_MAX &&
            mini_even < mini_odd) {
            return false;
        }

        return true;
    }
};