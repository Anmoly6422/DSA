#include<iostream>
using namespace std;
void seclargest(int arr[],int n){
    int l=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>l){
       l=arr[i];     

        }
         
    }
   int secl=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>secl && arr[i]!=l){
            secl=arr[i];
        }
    }
    cout<<secl;


}
int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    seclargest(arr,n);
    
}