#include<iostream>
using namespace std;
void f(int i,int n)
{
   
   if(i>n){
    return;
   }
   else {
    cout<<"Name"<<endl;
   }
   f(i+1,n);

}
int main()
{
    int n;
    cout<<"enter the number for rescursion of name:";
    cin>>n;
    f(1,n);
    return 0;

}