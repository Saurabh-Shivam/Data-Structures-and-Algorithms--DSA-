#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void reverseArray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
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

    cout << "Before Reverse" << endl;
    display(arr, n);

    cout << endl
         << "After Reverse" << endl;
    reverseArray(arr, n);
    display(arr, n);

    return 0;
}