#include<iostream>
#include<algorithm>
using namespace std;
void sortarr(int arr[],int n){
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid]==1)
        {
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
        
    }
}
int main()
{
    int arr[8]={1,2,0,0,1,2,1,0};
    sortarr(arr,8);
    cout<<"sorted array:";
    for(int i=0;i<8;i++){
    cout<<arr[i];}
    
    return 0;

}