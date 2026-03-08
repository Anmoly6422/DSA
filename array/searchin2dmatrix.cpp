#include<iostream>
#include<vector>
using namespace std;
bool searchelement(vector<vector<int>> &mat,int target){
    int n=mat.size();
    int m=mat[0].size();
    int row=0,col=m-1;
    while(row<n &&col>=0){
        if(mat[row][col]==target) return true;
        else if(mat[row][col]<target) row++;
        else col--;
    }
    return false;
}
int main(){
    vector<vector<int>> mat={
        {1,4,7,11,15},
        {2,5,8,12,19},
        {3,6,9,16,22},
        {10,13,14,17,24},
        {18,21,23,26,30}
    };
    cout<<searchelement(mat,31);
    return 0;
}