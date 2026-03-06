#include<iostream>
#include<vector>
using namespace std;
int trailxor(vector<int> &a,int k){
    int cnt=0;
    for(int i=0;i<a.size();i++){
        int xr;
        for(int j=i+1;j<a.size();j++){
            xr=a[i]^a[j];
            if(xr==k){
                cnt++;
                break;

            }

        }
    }
    return cnt;
}
int main(){
    vector <int> a={4,2,2,6,4};
    int k=6;
    int result=trailxor(a,k);
    cout<<result<<"";
    return 0;


}