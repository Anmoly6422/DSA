#include<iostream>
using namespace std;
int floorsqrt(int n){
    int low=1,high=n;
    while(low<=high){
        long long mid=(low+high)/2;
        long long val=(mid*mid);
        if(val<=n){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return high;


}
int main(){
     int n;
     cout<<"enter the number for square root:";
     cin>>n;
     cout<<floorsqrt(n);
     return 0;
}