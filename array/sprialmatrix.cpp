#include<iostream>
#include<vector>
using namespace std;
vector <int> sprialmat(vector<vector<int>> &mat){
    int n=mat.size();
    int m=mat[0].size();
    int left=0,right=n-1;
    int top=0,bottom=m-1;
    vector <int> ans;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            ans.push_back(mat[top][i]);
        } top++;
        for(int i=top;i<=bottom;i++){
            ans.push_back(mat[i][right]);
        }right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(mat[bottom][i]);
            }
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                ans.push_back(mat[i][left]);
            }
            left++;
        }
    }
    return ans;
}
int main(){
    vector<vector<int>> mat={
        {1,2,3,4},
        {12,13,14,5},
        {11,16,15,6},
        {10,9,8,7}
    };
    vector <int> ans=sprialmat(mat);
    for(int i:ans){
        cout<<i<<" ";
        cout<<endl;
    }
    
    return 0;
}