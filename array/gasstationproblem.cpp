#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool possible(vector<int>& arr, int k, double dist){
    int count = 0;

    for(int i=0;i<arr.size()-1;i++){
        double gap = arr[i+1] - arr[i];
        count += (int)(gap / dist);

        if(gap/dist == (int)(gap/dist))
            count--;

        if(count > k)
            return false;
    }

    return count <= k;
}

double minimiseMaxDistance(vector<int>& arr, int k){
    double low = 0;
    double high = 0;

    for(int i=0;i<arr.size()-1;i++)
        high = max(high, (double)(arr[i+1]-arr[i]));

    while(high - low > 1e-6){
        double mid = (low + high) / 2;

        if(possible(arr, k, mid))
            high = mid;
        else
            low = mid;
    }

    return high;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 4;

    cout << minimiseMaxDistance(arr, k);
}