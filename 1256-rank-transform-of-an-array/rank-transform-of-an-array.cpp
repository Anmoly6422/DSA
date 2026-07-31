class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>temp=arr;
        sort(temp.begin(),temp.end());
        unordered_map<int,int> mp;
        int rank=1;
        for(int num:temp){
            if(mp.find(num)==mp.end()){
                mp[num]=rank;
                rank++;
               
            }
       
        }
       for(int i=0;i<arr.size();i++){
        arr[i]=mp[arr[i]];
       }
       return arr;
    }
};