class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double windowsum=0;
        for(int i=0;i<k;i++){
            windowsum+=nums[i];

        }
         double maxavg=windowsum/k;
        for(int i=k;i<n;i++){
            windowsum+=nums[i]-nums[i-k];
            double windowavg=windowsum/k;
            maxavg=max(maxavg,windowavg);
        }
        return maxavg;
        
    }
};