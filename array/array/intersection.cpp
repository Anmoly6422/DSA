#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int arr1[] = {1, 2, 2, 3, 4};
    int arr2[] = {2, 2, 4, 6};

    set<int> s1(arr1, arr1 + 5); 
    set<int> s2(arr2, arr2 + 4);  
    vector<int> intersection;     

    for (int x : s1) {
        if (s2.find(x) != s2.end()) {  
            intersection.push_back(x);
        }
    }

    cout << "Intersection: ";
    for (int x : intersection) cout << x << " ";
}
