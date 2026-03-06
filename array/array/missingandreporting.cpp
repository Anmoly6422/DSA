#include<iostream>
#include<vector>
using namespace std;
vector<int> missingandrepeating(vector <int> &a){
    int n=a.size();
    vector <int> hash(n+1,0);
    for(int i=0;i<n;i++){
        hash[a[i]]++;
    }
    int repeating=-1,missing=-1;
    for(int i=1;i<n;i++){
        if(hash[i]==2) repeating=i;
        else if(hash[i]==0) missing=i;
        if(repeating !=-1&&missing !=-1){
            break;
        }
    }
    return {repeating,missing};
}
int main(){
    vector <int> a={4,3,6,2,1,1};
    vector<int> result=missingandrepeating(a);
    for(int i:result){
        cout<<i<<" ";
    }
    return 0;
}