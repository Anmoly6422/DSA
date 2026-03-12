#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int kthElement(vector<int> &a, vector<int> &b, int n1, int n2, int k){
    if(n1 > n2)
        return kthElement(b, a, n2, n1, k);

    int low = max(0, k - n2);
    int high = min(k, n1);

    while(low <= high){
        int mid1 = (low + high) / 2;
        int mid2 = k - mid1;

        int l1 = INT_MIN, l2 = INT_MIN;
        int r1 = INT_MAX, r2 = INT_MAX;

        if(mid1 < n1) r1 = a[mid1];
        if(mid2 < n2) r2 = b[mid2];

        if(mid1 > 0) l1 = a[mid1 - 1];
        if(mid2 > 0) l2 = b[mid2 - 1];

        if(l1 <= r2 && l2 <= r1)
            return max(l1, l2);
        else if(l1 > r2)
            high = mid1 - 1;
        else
            low = mid1 + 1;
    }

    return 0;
}

int main(){
    vector<int> a = {2,3,6,7,9};
    vector<int> b = {1,4,8,10};

    int n1 = a.size();
    int n2 = b.size();
    int k = 5;

    cout << kthElement(a, b, n1, n2, k);

    return 0;
}