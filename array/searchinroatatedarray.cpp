#include<iostream>
#include<vector>
using namespace std;
int searchinarray(vector<int> &arr,int n, int x){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x) return mid; 
        if(arr[low]<=arr[mid]){
            if(arr[low]<=x && x<=arr[mid]){
                high=mid-1;

            }
            else{
                low=mid+1;
            }
        }
        else{
            if(arr[mid]<=x && x<=arr[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int> arr={7,8,9,1,2,3,4,5,6};
    int x=5;
    int n=9;
    cout<<searchinarray(arr,n,x);
    return 0;

}