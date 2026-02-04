#include<iostream>
#include<algorithm>
using namespace std;
void sortarray(int a[],int n){
    sort(a,a+n);

}
int main(){
    int n;
    cout<<"enter no. of element";
    cin>>n;
    int arr[n];
    cout<<"enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sortarray(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}