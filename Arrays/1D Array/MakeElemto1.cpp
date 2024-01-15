#include <iostream>
using namespace std;

void display(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void displaywith1(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        arr[i] = 1;
    }
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

    cout << "Before converting to 1s: ";
    display(arr, n);

    cout << endl
         << "After converting to 1s: ";
    displaywith1(arr, n);
    display(arr, n);

    return 0;
}