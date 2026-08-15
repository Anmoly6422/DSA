class Solution {
public:
    static int longestSubsequence(vector<int>& nums) {
        int sum=0, n=nums.size();
        bool all0=1;
        for(int x:nums){
            sum^=x;
            all0&=x==0;
        }
        return (all0) ? 0 : n-(sum==0);
    }
};