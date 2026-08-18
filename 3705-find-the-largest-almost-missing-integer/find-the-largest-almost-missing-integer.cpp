class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        const int n=nums.size();
        if (k==n) return ranges::max(nums);

        int freq[51]={0};
        for(int x: nums)
            freq[x]++;

        if (k==1){
            for(int x=50; x>=0; x--)
                if (freq[x]==1) return x;
            return -1;
        }
        int x0=nums[0], x1=nums.back();
        bool b0=freq[x0]>1, b1=freq[x1]>1;
        uint8_t caseb=b0*2+b1;
    
        switch(caseb){
            case 0: return (x0<x1)?x1:x0;
            case 1: return x0;
            case 2: return x1;
            case 3: return -1;
        }
        return -1;
    }
};