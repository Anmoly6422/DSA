#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void reverseString(vector<char>& s) {
        int l=0;
        int r=s.size()-1;
        while(l<r){
            swap(s[l],s[r]);
            l++;
            r--;
        }
    }
int main(){
    vector<char> s={'h','e','l','l','o'};
    reverseString(s);
     for (char ch : s) {
        cout << ch << " ";
    }
    return 0;
}
