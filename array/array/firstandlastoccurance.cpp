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
pair<int,int> firstandlast(vector <int> &arr,int n,int x){
    int lb=lowerbound(arr,n,x);
    if(lb==n||arr[lb]!=x) return {-1,-1};
    return{lb,upperbound(arr,n,x)-1};

}
int main(){
    vector<int> arr={2,4,6,8,8,8,11,13};
    pair<int,int> result=firstandlast(arr,8,8);
    cout << "First Index: " << result.first << endl;
    cout << "Last Index: " << result.second << endl;
   
    return 0;
}