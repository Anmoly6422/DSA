#include<iostream>
using namespace std;
void printl( int n)
{
    for (int i=0;i<n;i++){
        for (int j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"enter the no. for pattern:";
    cin>>n;
    printl(n);
    return 0;
    
}