#include <iostream>
#include <climits>
using namespace std;

int MaxElem(int arr[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }

    return maxi;
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

    int ans = MaxElem(arr, n);
    cout << endl
         << ans;

    return 0;
}