#include<iostream>
#include<vector>
using namespace std;
int lowerbound(vector<int> &arr,int n,int x){
    int low=0,high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=x){
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
    vector<int> arr={1,2,3,3,7,8,9,9,11};
    cout<<lowerbound(arr,9,11);
    return 0;


}