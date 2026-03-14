#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
int finddays(vector<int>&weights,int cap)
{
    int load=0,days=1;
    for(int i=0;i<weights.size();i++){
        if(weights[i]+load>cap){
            days+=1;
            load=weights[i];
        }
        else{
            load+=weights[i];
        }
    }
    return days;
}
int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        while(low<=high){
            int mid=(low+high)/2;
            int noofdays=finddays(weights,mid);
            if(noofdays<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
        
    }
int main(){
    vector<int> weights={1,2,3,4,5,6,7,8,9,10};
   int  days=5;
    cout<<shipWithinDays(weights,days);
    return 0;
}