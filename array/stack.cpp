#include<iostream>
using namespace std;
# define max_size 5
int stack[max_size];
int top=-1;
void push(int x){
    if(top>=max_size-1){
        cout<<"overflow"<<endl;
    }
    else{
        top=top+1;
        stack[top]=x;
        cout<<"pushed element:"<<x<<endl;
    }
}
void pop( ){
     if(top==-1){
        cout<<"underflow"<<endl;
    }
    else{
        top=top-1;
        cout<<stack[top]<<"pooped from stack";
    }
}
void peep(){
    if(top==-1){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"top element:"<<stack[top];
    }

}
void traverse(){
    if(top==-1){
        cout<<"stack is empty.."<<endl;
    }
    cout<<"elements are:";
    for(int i=top;i>=0;i--){
        cout<<stack[i]<<" ";
    }
}

int main(){
    int choice,x;
  do{  
    cout<<"+++++++++++++++++++++++";
    cout<<"1.push"<<endl;
    cout<<"2.pop"<<endl;
    cout<<"3.peep"<<endl;
    cout<<"4.traverse"<<endl;
    cout<<"Enter the choices:";
    cin>>choice;

    switch (choice)
    {
    case 1:
        cout<<"enter the value:";
        cin>>x;
        push(x);
        break;
     case 2:
        
        pop();
        break;
    case 3:
        
        peep();
        break;
    case 4:
    traverse();
    break;
    
    default:
    cout<<"enter the given choice";
        break;
    }
}
while(choice!=5);
return 0;

    

}