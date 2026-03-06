#include<iostream>
using namespace std;
void insertion(int arr[],int n){
    for(int i=1;i<n;i++){
        int j=i;
        while(j>0&&arr[j-1]>arr[j]){
            
        int temp=arr[j-1];
        arr[j-1]=arr[j];
        arr[j]=temp;
               j--;
            

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
    insertion(arr,n);
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}