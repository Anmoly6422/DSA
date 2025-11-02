#include<iostream>
using namespace std;
int missing(int arr[],int n,int m){
   int sum=(n*(n+1))/2;
   int s=0;
   for (int i=0;i<n-1;i++){
    s+=arr[i];

   }
   return (sum-s);

}
int main(){
int m;
    cout << "enter the missing number for search:";
    cin >> m;
    int n;
    cout << "enter the size of natural number in array";
    cin >> n;
    int arr[n];
    cout << "enter the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<missing(arr,n,m);
    return 0;
}