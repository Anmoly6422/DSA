#include<iostream>
using namespace std;
void bubble(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
        int temp=arr[j+1];
        arr[j+1]=arr[j];
        arr[j]=temp;
               
            }

        }
        
    }
}
int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble(arr,n);
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}