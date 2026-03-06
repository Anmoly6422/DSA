#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];  
    int i = low;
    int j = high;

    while (i < j) {
        while (i <= high - 1 && arr[i] <= pivot) i++;
        while (j >= low + 1 && arr[j] > pivot) j--;

        if (i < j) swap(arr[i], arr[j]);
    }

    swap(arr[low], arr[j]);
    return j;
}

void qs(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pindex = partition(arr, low, high);
        qs(arr, low, pindex - 1);
        qs(arr, pindex + 1, high);
    }
}

int main() {
    vector<int> arr = {12, 4, 9, 1, 10};
    qs(arr, 0, arr.size() - 1);

    for (int x : arr) cout << x << " ";
    cout << endl;
    return 0;
}
