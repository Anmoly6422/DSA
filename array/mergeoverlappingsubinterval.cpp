#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> mergeoverlap(vector<vector<int>> &a){
    int n=a.size();
    vector<vector<int>> ans;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        int start=a[i][0];
        int end=a[i][1];
        if(!ans.empty()&& end<=ans.back()[1]){
            continue;
        }
        for(int j=i+1;j<n;j++){
            if(a[j][0]<=end){
            end=max(end,a[j][1]);}
            else{
                break;
            }
            
        }
        ans.push_back({start,end});
       

    }
    return ans;

}
int main(){
    vector<vector<int>> a = {
        {1,2},{2,3},{2,4},{8,9},{9,11},{9,12},{15,18},{16,19}};
    vector <vector<int>>result=mergeoverlap(a);
    for(auto i:result){
    cout<<i[0]<<" "<<i[1];
    cout<<endl;
        
    }
return 0;
}