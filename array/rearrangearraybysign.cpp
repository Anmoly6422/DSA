#include<iostream>
#include<vector>
using namespace std;
 vector <int> rearrangearray(vector<int> &nums){
    int n=nums.size();
    vector<int> ans(n,0);
    int posindex=0,negindex=1;
    for (int i=0;i<n;i++){
        if(nums[i]<0){
            ans[negindex]=nums[i];
            negindex +=2;

        }
        else{
            ans[posindex]=nums[i];
            posindex +=2;
        }
        
    }
    return ans;
 }
 int main(){
    vector <int> nums={3,1,-2,-5,2,-4};
   vector<int> result=rearrangearray(nums);
   cout<<"output";
   for(int i=0;i<result.size();i++){
    cout<<result[i]<<" ";
   }
    
    return 0;
 }