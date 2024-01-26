#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

// brute force approach
void leftRotate(vector<int> arr, int r)
{
    while (r > 0)
    {
        for (int i = 0; i < arr.size() - 1; i++)
        {
            swap(arr[i], arr[i + 1]);
        }

        r--;
    }

    display(arr);
}

int main()
{

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    // taking input in vector
    vector<int> arr(n);
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int r;
    cout << "Enter the number of rotation: ";
    cin >> r;

    leftRotate(arr, r);
    return 0;
}