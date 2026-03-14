#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<climits>
using namespace std;
int sumbydiv(vector<int> &arr,int div){
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum=sum+ceil(((double)arr[i])/(double)(div));
    }
    return sum;
}
int smalldivisor(vector<int> &arr,int threshold){
    int low=1,high=*max_element(arr.begin(),arr.end());
    while(low<=high){
        int mid=(low+high)/2;
        if(sumbydiv(arr,mid)<=threshold){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;
}
int main(){
    vector<int> arr={1,2,5,9};
    int threshold=6;
    cout<<smalldivisor(arr,threshold);
    return 0;

}