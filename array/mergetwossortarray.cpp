#include<iostream>
#include<algorithm>
using namespace std;
void mergetwoarray(long long arr1[],long long arr2[],int n,int m){
    int right=n-1;
    int left=0;
    while(left>=0&&right<m){
        if(arr1[right]>arr2[left]){
            swap(arr1[right],arr2[left]);
            right--;
            left++;

        
        }
        else{
                break;
            }
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
}
int main(){
    long long arr1[4]={1,3,5,7};
    long long arr2[5]={0,2,6,8,9};
    int n=4;
    int m=5;
    mergetwoarray(arr1,arr2,n,m);
    cout<<"array1:\n";
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    cout<<"array2:\n";
     for(int j=0;j<m;j++){
        cout<<arr2[j]<<" ";
    }
    return 0;


}

