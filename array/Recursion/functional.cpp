#include<iostream>
using namespace std;
int  f(int n)
{
   
   if(n==0)
   return 0;
   else
   return n + f(n-1);

}
int main()
{
    int n;
    cout<<"enter the number for summation:";
    cin>>n;
    cout<<"the sum is :"<<f(n);
    return 0;
}