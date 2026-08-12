class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {

        unordered_map<int, int> freq;

        int prefixSum = 0;
        int count = 0;

        // Remainder 0 has appeared once
        freq[0] = 1;

        for (int i = 0; i < nums.size(); i++) {

            prefixSum += nums[i];

            // Get positive remainder
            int rem = (prefixSum % k + k) % k;

            // Same remainder means difference is divisible by k
            count += freq[rem];

            // Store this remainder
            freq[rem]++;
        }

        return count;
    }
};