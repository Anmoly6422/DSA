#include<iostream>
#include<vector>
using namespace std;
int upperbound(vector<int> &arr,int n,int x){
    int low=0,high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>x){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr={2,3,6,7,8,8,11,11,11,12};
    cout<<upperbound(arr,10,6);
    return 0;
}