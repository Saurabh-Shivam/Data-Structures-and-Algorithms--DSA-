#include <iostream>
#include <vector>
using namespace std;

int searchNearSorted(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == target)
            return mid;
        else if (arr[mid + 1] == target)
            return mid + 1;
        else if (arr[mid - 1] == target)
            return mid - 1;
        else if (arr[mid] < target)
            start = mid + 2;
        else
            end = mid - 2;
    }

    return -1;
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
        cin >> arr[i];

    int target;
    cout << "Enter the target element: ";
    cin >> target;

    cout << "The element is present at index " << searchNearSorted(arr, target);

    return 0;
}