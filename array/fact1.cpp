#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number for sum:";
    cin>>n;
    int ans=0;
    int rem=0;
    // for(int i=1;i<=n;i++){
    //     ans*=i;
    // }
    while(n>0){
        rem=n%10;
        ans+=rem;
        n=n/10;
    }
    cout<<"answer of  is "<<ans;
    return 0;
}