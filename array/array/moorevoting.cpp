#include<iostream>
#include<vector>
using namespace std;

int majorele(vector<int> v) {
    int cnt = 0;
    int ele = 0;

    
    for(int i = 0; i < v.size(); i++) {
        if(cnt == 0) {
            ele = v[i];
            cnt = 1;
        }
        else if(v[i] == ele) {
            cnt++;
        }
        else {
            cnt--;
        }
    }

    
    int cnt1 = 0;
    for(int i = 0; i < v.size(); i++) {
        if(v[i] == ele) {cnt1++;}
    }

    if(cnt1 > v.size() / 2) {
        return ele;
    }

    return -1;  
}

int main() {
    vector<int> v = {5, 5, 3, 3, 2,5, 5};
    cout << "The majority element is: ";
    cout << majorele(v);
    return 0;
}
