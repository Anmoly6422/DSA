#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    int q;
    cout<<"enter the size:";
    cin>>q;
    while(q--){
        int num;
        cout<<"enter the number for size:";
        cin>>num;
        cout<<hash[num]<<endl;

    }
    return 0;
}