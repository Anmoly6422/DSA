#include<iostream>
#include<vector>
#include<algorithm>
#include <numeric>
using namespace std;
int countstudent(vector<int> &arr,int pages){
    int student=1;
    long long pagesstudent=0;
    for(int i=0;i<arr.size();i++){
        if(pagesstudent+arr[i]<=pages){
            pagesstudent+=arr[i];

        }
        else{
            student++;
            pagesstudent=arr[i];
        }
    }
    return student;
}
int findpages(vector<int> &arr,int m,int n){
    if(m>n) return -1;
    int low=*max_element(arr.begin(),arr.end());
    int high=accumulate(arr.begin(),arr.end(),0);
    while(low<=high){
        int mid=(low+high)/2;
        int student=countstudent(arr,mid);
        if(student>m){
             low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;
}
int main(){
    vector <int> arr={25,46,28,49,24};
    cout<<findpages(arr,4,5);
    return 0;
}