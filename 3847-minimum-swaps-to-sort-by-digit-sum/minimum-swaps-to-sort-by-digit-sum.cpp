class Solution {
public:
    int digitSum(int n)
    {
        int ans = 0;
        while(n>0)
        {
            ans+=(n%10);
            n/=10;
        }
        return ans;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        map<int,vector<int>>freq;

        for(int i = 0 ; i<n ;i++)
        {
            int sum = digitSum(nums[i]);
            freq[sum].push_back(nums[i]);
        }

        vector<int>arr;
        for(auto &it : freq)
        {
            sort(it.second.begin(),it.second.end());

            for(int ele : it.second)
            {
                arr.push_back(ele);
            }
        }

        map<int,int>freq2;
        for(int i = 0 ; i<n ;i++)
        {
            freq2[arr[i]] = i;
        }

        int ans = 0;
        vector<bool>passed(n,false);
        for(int i = 0 ; i<n ;i++)
        {
            if(passed[i]) continue;

            int curIdx = i,cnt = 0;
            while(!passed[curIdx])
            {
                passed[curIdx] = true;
                curIdx = freq2[nums[curIdx]];
                cnt++;
            }

            ans+=(cnt-1);
        }

        return ans;
    }
};