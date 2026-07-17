class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int maxVal = *max_element(nums.begin(), nums.end());

        // frequency of x
        vector<long long> freq(maxVal + 1, 0);
        for (int x : nums)
            freq[x]++;

        // divCnt[g] stores the freq of numbers divisible by g
        vector<long long> divCnt(maxVal + 1, 0);

        for (int g = 1; g <= maxVal; g++) {
            for (int x = g; x <= maxVal; x += g)
                divCnt[g] += freq[x];
        }

        // exact[g] is the number of pairs whose gcd is exactly g
        vector<long long> exact(maxVal + 1, 0);

        for (int g = maxVal; g >= 1; g--) {
            exact[g] = divCnt[g] * (divCnt[g] - 1) / 2; //pairing of all numbers divisible by g
        // it may be possible that two numbers are divisble by x but their gcd is not exactly x, it can be k*x so we have to remove those pairs
            for (int m = 2 * g; m <= maxVal; m += g)
                exact[g] -= exact[m];
        }

        // prefix[g] => pairs with gcd <= g
        vector<long long> prefix(maxVal + 1, 0);
        for (int g = 1; g <= maxVal; g++)
            prefix[g] = prefix[g - 1] + exact[g];

        vector<int> ans;

        for (long long q : queries) {
            // first gcd whose prefix > q
            int g = lower_bound(prefix.begin() + 1, prefix.end(), q + 1) - prefix.begin();
            ans.push_back(g);
        }

        return ans;
    }
};