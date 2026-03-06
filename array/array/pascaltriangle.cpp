#include<iostream>
#include<vector>
using namespace std;
vector <int > generate(int row){
    long long ans=1;
    vector <int> ansrow;
    ansrow.push_back(1);
    for(int col=1;col<row;col++){
        ans=ans*(row-col);
        ans=ans/col;
        ansrow.push_back(ans);
    }
     return ansrow;
}
vector<vector<int>> pascal(int n){
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        ans.push_back(generate(i+1));
    }
    return ans;
}
int main(){
    int row=4;
    vector <vector<int>> result=pascal(row);
    for(auto i:result){
        for(int r:i){
    cout << r<<" ";}
cout<<endl;}
    
    return 0;
}