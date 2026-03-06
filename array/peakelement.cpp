#include<iostream>
#include<vector>
using namespace std;

int findmaxindex(vector<vector<int>> &mat,int n,int m,int col){
    int maxvalue = -1;
    int index = -1;

    for(int i=0;i<n;i++){
        if(mat[i][col] > maxvalue){
            maxvalue = mat[i][col];
            index = i;
        }
    }
    return index;
}

vector<int> findpeakgrid(vector<vector<int>> &mat){
    int n = mat.size();
    int m = mat[0].size();

    int low = 0, high = m-1;

    while(low <= high){
        int mid = (low + high)/2;

        int maxrowindex = findmaxindex(mat,n,m,mid);

        int left = (mid-1 >= 0) ? mat[maxrowindex][mid-1] : -1;
        int right = (mid+1 < m) ? mat[maxrowindex][mid+1] : -1;

        if(mat[maxrowindex][mid] > left && mat[maxrowindex][mid] > right){
            return {maxrowindex, mid};
        }
        else if(mat[maxrowindex][mid] < left){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    return {-1,-1};
}

int main(){

    vector<vector<int>> mat = {
        {1,4,7,3,2},
        {6,5,9,8,4},
        {3,2,10,11,1},
        {7,6,12,5,0}
    };

    vector<int> ans = findpeakgrid(mat);

    cout << "Peak element found at: ";
    cout << ans[0] << " " << ans[1];

}