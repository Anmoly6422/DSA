#include <bits/stdc++.h>
using namespace std;

int countSmallerEqual(vector<int>& row, int x) {
    return upper_bound(row.begin(), row.end(), x) - row.begin();
}

int median(vector<vector<int>>& matrix, int r, int c) {
    int low = INT_MAX, high = INT_MIN;

    
    for(int i = 0; i < r; i++) {
        low = min(low, matrix[i][0]);
        high = max(high, matrix[i][c-1]);
    }

    int desired = (r * c + 1) / 2;

    while(low < high) {
        int mid = (low + high) / 2;
        int count = 0;

        for(int i = 0; i < r; i++)
            count += countSmallerEqual(matrix[i], mid);

        if(count < desired)
            low = mid + 1;
        else
            high = mid;
    }

    return low;
}

int main() {
    int r = 3, c = 3;

    vector<vector<int>> matrix = {
        {1, 3, 5},
        {2, 6, 9},
        {3, 6, 9}
    };

    cout << "Median of the matrix is: " << median(matrix, r, c) << endl;

    return 0;
}