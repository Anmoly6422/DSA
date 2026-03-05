#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

bool canPaint(vector<int>& boards, int k, int mid){
    int painters = 1;
    int sum = 0;

    for(int i = 0; i < boards.size(); i++){
        if(sum + boards[i] <= mid){
            sum += boards[i];
        }
        else{
            painters++;
            sum = boards[i];
        }
    }

    return painters <= k;
}

int painterPartition(vector<int>& boards, int k){

    int low = *max_element(boards.begin(), boards.end());
    int high = accumulate(boards.begin(), boards.end(), 0);

    while(low <= high){
        int mid = (low + high) / 2;

        if(canPaint(boards, k, mid)){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    return low;
}

int main(){
    vector<int> boards = {10,20,30,40};
    int k = 2;

    cout << painterPartition(boards, k);
}