#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {4, 5, 6, 7, 8};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    set<int> unionSet;

    
    for (int i = 0; i < n1; i++) {
        unionSet.insert(arr1[i]);
    }

    
    for (int i = 0; i < n2; i++) {
        unionSet.insert(arr2[i]);
    }

    cout << "Union of the two arrays: ";
    for (int val : unionSet) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
