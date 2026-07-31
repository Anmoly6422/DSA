class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxval=INT_MIN;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
              int  value=(nums[i]-1)*(nums[j]-1);
                maxval=max(maxval,value);

            }
        }
        return maxval;
    }
};