#include<iostream>
using namespace std;
void largest(int arr[],int n){
    int l=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>l){
       l=arr[i];     

        }
         
    }
    cout<<l;


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
    largest(arr,n);
    
}