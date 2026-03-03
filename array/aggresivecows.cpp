#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool canweplace(vector<int> &stalls, int dist, int cows)
{
    int cntcows = 1, last = stalls[0];
    for (int i = 1; i < stalls.size(); i++)
    {
        if (stalls[i]-last >= dist)
        {
            cntcows++;
            last = stalls[i];
        }
        if (cntcows >= cows)
            return true;
    
    }
    return false;
}
int aggresivecows(vector<int> &stalls, int k)
{
    int n = stalls.size();
    sort(stalls.begin(), stalls.end());
    int low = 1, high = stalls[n - 1] - stalls[0];
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (canweplace(stalls, mid, k) == true)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return high;
}
int main()
{
    vector<int> stalls = { 3, 4, 7, 10, 9};
    cout << aggresivecows(stalls, 2);
    return 0;
}