#include<iostream>
#include<vector>
using namespace std;
int findconsecutive(vector<int> &num){
    int maxi=0;
    int cnt=0;
    for(int i=0;i<num.size();i++){
        if(num[i]==1){
            cnt++;
            maxi=max(maxi,cnt);

        }
        else{
            cnt=0;
        }
    }
    return maxi;
}
int main(){
    vector<int> num;
    num={1,1,0,1,1,1,1,1,1};
    findconsecutive(num);
    cout<<"the output is"<<findconsecutive(num);

    return 0;
}