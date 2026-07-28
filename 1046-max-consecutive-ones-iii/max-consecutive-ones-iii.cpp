class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0;
        int maxnum=0;
        int zeroc=0;
        for(int right =0;right<nums.size();right++){

            if(nums[right]==0){
                zeroc++;
            }
            while(zeroc>k){

                if(nums[left]==0){
                    zeroc--;
                    
                }
                left++;

            }
            maxnum=max(maxnum,right-left+1);

        }
        return maxnum;
        
    }
};