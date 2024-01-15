#include <iostream>
using namespace std;

void displayCount(int arr[], int n)
{
    int count0 = 0;
    int count1 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }

        if (arr[i] == 1)
        {
            count1++;
        }
    }

    cout << "number of zeroes-> " << count0 << endl;
    cout << "number of ones-> " << count1 << endl;
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

    displayCount(arr, n);

    return 0;
}