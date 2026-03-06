#include <iostream>
using namespace std;

void search(int t[], int p[], int n, int m)
{
    for (int i = 0; i <= n - m; i++)
    {
        int j = 0;
        for (j = 0; j < m; j++)
        {
            if (t[i + j] != p[j])
                break;
        }
        if (j == m)
        {
            cout << "Pattern found at index " << i << endl;
        }
    }
}

int main()
{
    int arr[6] = {1, 2, 2, 3, 1, 4};
    int pa[2] = {1, 2};

    search(arr, pa, 6, 2);

    return 0;
}
