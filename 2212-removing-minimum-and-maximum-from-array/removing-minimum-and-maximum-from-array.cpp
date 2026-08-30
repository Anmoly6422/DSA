class Solution { 
public: 
    int minimumDeletions(vector<int>& nums) { 
        int n = nums.size(); 
 
        int minIndex = min_element(nums.begin(), nums.end()) - nums.begin(); 
        int maxIndex = max_element(nums.begin(), nums.end()) - nums.begin(); 
 
        int left = min(minIndex, maxIndex); 
        int right = max(minIndex, maxIndex); 
 
       
        int front = right + 1; 
 
        
        int back = n - left; 
 
        
        int frontBack = (left + 1) + (n - right); 
 
        return min({front, back, frontBack}); 
    } 
};