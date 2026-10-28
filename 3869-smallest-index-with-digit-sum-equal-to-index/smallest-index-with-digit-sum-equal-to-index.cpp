class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int result=0;
        int check;
        int n=nums.size();
        for(int i=0;i<n;i++){
             check=nums[i];
             int sum =0;
            while(check>0){
              sum += check%10;
                check/=10;
            }
            if(sum == i){
               int minnum = i;
                //result=min(result,min);
                return i ;
            }
        }
        return -1;
    }  
};