#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

pair<int, int> twosum(int n, vector<int> a, int target) {
    int left = 0, right = n - 1;
    sort(a.begin(), a.end());
    while (left < right) {
        int sum = a[left] + a[right];
        if (sum == target) {
            return {left, right};
        } else if (sum < target)
            left++;
        else
            right--;
    }
    return {-1, -1};
}

int main() {
    vector<int> a;
    int value;
    cout << "Enter numbers (-1 to stop): ";
    while (cin >> value && value != -1) {
        a.push_back(value);
    }
    int n = a.size();
    int target;
    cout << "Enter the target sum: ";
    cin >> target;

    auto r = twosum(n, a, target);
    if (r.first == -1)
        cout << "No such pair found.\n";
    else
        cout << "The indices are: " << r.first << " and " << r.second << endl;

    return 0;
}
