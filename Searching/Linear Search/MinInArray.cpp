#include <iostream>
#include <climits>
using namespace std;

int MinElem(int arr[], int n)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }

    return mini;
}

int main()
{
    int n;
    cout << "Enter the number of elements:" << endl;
    cin >> n;

    int arr[1000];
    cout << "Enter the elements of array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = MinElem(arr, n);
    cout << endl
         << ans;

    return 0;
}