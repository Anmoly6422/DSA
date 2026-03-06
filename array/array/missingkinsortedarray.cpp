#include<iostream>
#include<vector>
using namespace std;
int findk(vector<int> &arr,int n,int k){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        int missing=arr[mid]-arr[mid+1];
        if(missing<k){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return high+k+1;
}
int main()
{
    vector<int> arr={2,3,4,7,11};
    cout<<findk(arr,5,5);
    return 0;
}