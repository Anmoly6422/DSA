class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min =nums[0];
        int max=nums[0];
       for(int i=0;i<nums.size();i++){
          if(nums[i]<min){
            min=nums[i];
          }
          if(nums[i]>max){
            max=nums[i];
          }
       }
       return (gcd(min,max));
    }
};