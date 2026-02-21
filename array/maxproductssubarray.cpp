#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int maxproductsubarray(vector <int> &arr){
    int pre=1;
    int suff=1;
    int ans=INT_MIN;
    int n=arr.size();
    for(int i=0;i<arr.size();i++){
        if(pre==0) pre=1;
        if(suff==0) suff=1;
        pre=pre*arr[i];
        suff=suff*arr[n-i-1];
        ans=max(ans,max(pre,suff));
    }
    return ans;
}
int main(){
    vector<int> arr={2,3,-2,4};
    cout<<maxproductsubarray(arr);
    return 0;
}