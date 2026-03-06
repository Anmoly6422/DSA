#include<iostream>
#include<climits>
using namespace std;
int maxsubarr(int arr[],int n){
    int sum=0,max=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>max){
            max=sum;
        }
        if(sum<0){
            sum=0;
        }

    }
    return max;
}
int main(){
    int arr[8]={-2,-3,4,-1,-2,1,5,-3};
    int result=maxsubarr(arr,8);
    cout<<"the greatest sum is :"<<result;
    return 0;
}