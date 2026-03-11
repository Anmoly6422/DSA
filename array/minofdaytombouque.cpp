#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int possible(vector<int> arr,int days,int m,int k){
    int cnt=0;
    int noofb=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<=days){
            cnt++;
        }
        else{
            noofb+=(cnt/k);
            cnt=0;
        }

    }
    noofb+=(cnt/k);
    return noofb>=m;
}
int rosegarden(vector<int> &arr,int r,int b){
    long long val=r*1ll*b*1ll;
    if(val>arr.size()) return -1;
    int mini=INT_MAX,maxi=INT_MIN;
    for(int i=0;i<arr.size();i++){
        mini=min(mini,arr[i]);
        maxi=max(maxi,arr[i]);
    }
    int low=mini,high=maxi;
    while(low<=high){
        int mid=(low+high)/2;
        if(possible(arr,mid,r,b)){
            high=mid-1;
        }
        else {
            low=mid+1;
        }

    }
    return low;
}
int main(){
    vector<int> arr={7,7,7,7,13,11,12,7};
    int m=2;
    int k=3;
    cout<<"minimum no. of days:";
    cout<<rosegarden(arr,m,k);
    return 0;
}