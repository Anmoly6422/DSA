#include <iostream>
using namespace std;
void leftrotated(int arr[], int n,int d)
{
    d=d%n;
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = d; i < n; i++)
    {
       arr[i-d]=arr[i];
    }
    for(int i=n-d;i<n;i++)
    {
        arr[i]=temp[i-(n-d)];

    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

}
int main()
{
    int d;
    cout<<"enter the d place to rotate:";
    cin>>d;
    int arr[5] = {1, 2, 3, 4, 5};
    leftrotated(arr, 5,d);



    return 0;
}