#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// Two Pointer Approach
void disExtreme(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        if (start == end)
        {
            cout << arr[start] << " ";
            start++;
        }

        else
        {
            cout << arr[start] << " ";
            cout << arr[end] << " ";
            start++;
            end--;
        }
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

    cout << "Array before extreme elements arrangement: ";
    display(arr, n);

    cout << endl
         << "Array after extreme elements arrangement: ";
    disExtreme(arr, n);

    return 0;
}