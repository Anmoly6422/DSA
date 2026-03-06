#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]+=1;
    }
    int q;
    cout<<"enter the size:";
    cin>>q;
    while(q--){
        int num;
        cout<<"enter the number for size:";
        cin>>num;
        cout<<mpp[num]<<endl;

    }
    return 0;
}