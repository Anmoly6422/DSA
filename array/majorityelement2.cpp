#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
vector <int> majorityelement(vector <int> &v){
    vector <int> ls;
    int n=v.size();
    int mini=(int) (n/3)+1;
    map <int,int> mpp;
    for(int i =0;i<n;i++){
        mpp[v[i]]++;
        if(mpp[v[i]]==mini){
            ls.push_back(v[i]);
        }
        if(ls.size()==2) break;
    }
    sort(ls.begin(),ls.end());
    
    return ls;

}
int main(){
    vector <int> v={1,2,2,3,3,1,2,1
    };
    vector<int> result=majorityelement(v);
    for(int i:result){
        cout<<i<<" ";
    }
    return 0;
}