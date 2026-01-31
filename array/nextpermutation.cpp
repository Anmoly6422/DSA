#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> permutation(vector<int> a)
{
    int ind = -1;
    int n = a.size();
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] < a[i + 1])
        {
            ind = i;
            break;
        }
    }
    if (ind == -1)
    {
        reverse(a.begin(), a.end());
        return a;
    }
    for (int i = n - 1; i > ind; i--)
    {
        if (a[i] > a[ind])
        {
            swap(a[i], a[ind]);
            break;
        }
    }
    reverse(a.begin() + ind + 1, a.end());
    return a;
}
int main()
{
    vector<int> a = {2, 1, 5, 4, 3, 0, 0};
    vector<int> result = permutation(a);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
    }
    return 0;
}
