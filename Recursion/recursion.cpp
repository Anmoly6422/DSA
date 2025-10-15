#include<iostream>
using namespace std;
int cut=0;
void f()
{
   
   if(cut==4){
    return;
   }
   else {
    cout<<cut<<endl;
    cut++;
   }
   f();

}
int main()
{
    f();
}