#include<iostream>
#include<vector>
using namespace std;
int bs(vector<int> &a,int low,int high,int target){
    if(low>high) return -1;
    int mid=(low+high)/2;
    if(a[mid]==target) return mid;
    else if(target>a[mid]) return bs(a,mid+1,high,target);
    return bs(a,low,mid-1,target);
}
int main(){
    vector<int> a={3,4,5,6,7,12,16,17};
    cout<<bs(a,3,17,6);
    return 0;
}