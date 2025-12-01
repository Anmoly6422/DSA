#include<iostream>
#include<climits>
using namespace std;
int maxprofit(int price[],int n){
    int minprice=INT_MAX;
    int maxprice=0;
    for(int i=0;i<n;i++){
        minprice=min(minprice,price[i]);
        maxprice=max(maxprice,price[i]-minprice);

    }
    return maxprice;

}
int main(){
    int price[7]={7,1,3,5,6,4,2};
    cout<<maxprofit(price,7);
    return 0;
}