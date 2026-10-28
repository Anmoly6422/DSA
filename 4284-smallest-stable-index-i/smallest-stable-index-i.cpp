class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int maxleft=nums[0];
            for(int j=0;j<=i;j++){
                maxleft=max(maxleft,nums[j]);
            }
            int minright=nums[i];
            for(int j=i;j<n;j++){
                minright=min(minright,nums[j]);
            }
            if(maxleft-minright<=k){
                return i;
            }
        }
        return -1;
    }
};