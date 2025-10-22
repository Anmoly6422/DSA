#include<iostream>
using namespace std;
int main (){
    string s;
    cout<<"enter the string";
    cin>>s;

    int hash[26]={0};
    for (int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
    int q;
    cout<<"enter the size:";
    cin>>q;
    while(q--){
        char c;
        cout<<"enter the char:";
        cin>>c;
        cout<<"length is:"<<hash[c-'a'];

    }
    return 0;
}