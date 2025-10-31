#include<iostream>
#include<utility>
using namespace std;
void movezero(int a[],int n){
    int j=-1;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1) return ;
    for(int i=j+1;i<n;i++){
        if(a[i]!=0){
            swap(a[i],a[j]);
            j++;
            
        }
    }

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
    movezero(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}