#include <iostream>
using namespace std;
int linearsearch(int arr[], int n, int num)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int num;
    cout << "enter the number for search:";
    cin >> num;
    int n;
    cout << "enter the size of array:";
    cin >> n;
    int arr[n];
    cout << "enter the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int result = linearsearch(arr, n, num);
    if (result != -1)
        cout << "Number found at index " << result << endl;
    else
        cout << "Number not found" << endl;

    return 0;
}