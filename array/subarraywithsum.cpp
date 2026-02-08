#include <iostream>
#include <vector>
#include <map>
using namespace std;
int sumsubarray(vector<int> &arr, int k)
{
    map<int, int> mpp;
    mpp[0] = 1;
    int presum = 0, cnt = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        presum += arr[i];
        int remove = presum - k;
        cnt += mpp[remove];
        mpp[presum] += 1;
    }
    return cnt;
}
int main(){
    vector <int > arr={1,2,3,-3,1,1,1,4,2,-3};
    int k=3;
    int result=sumsubarray(arr,k);
    cout<<result;
    return 0;

}