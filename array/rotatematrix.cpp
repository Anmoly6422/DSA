#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void rotatematrix(vector<vector<int>> & mat){
    int n=mat.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
    for (int i=0;i<n;i++){
        reverse(mat[i].begin(),mat[i].end());
    }
}
int main(){
    vector<vector<int>> mat={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    rotatematrix(mat);
    int n=mat.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
}
return 0;}