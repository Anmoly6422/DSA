class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>prefix(nums.size());
        int product=1;
        for(int i=0;i<nums.size();i++){
            prefix[i] = product;
            product*=nums[i];
        }
        product =1;
        for(int i=nums.size()-1;i>=0;i--){
            prefix[i] *= product;
            product *= nums[i];
        }
        return prefix;
    }
};