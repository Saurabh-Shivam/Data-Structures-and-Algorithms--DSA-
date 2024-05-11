#include <iostream>
#include <vector>
using namespace std;

int binarySearch(int arr[], int start, int end, int target)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
            end = mid - 1;
        else
            start = mid + 1;
    }

    return -1;
}

// Time Complexity: O(log(2^logm-1))
int elemInfiniteArr(int arr[], int n, int target)
{
    int i = 0, j = 1;
    while (arr[j] < target)
    {
        i = j;
        j = j * 2;
    }

    int start = i, end = j;

    return binarySearch(arr, start, end, target);
}
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    // taking input in array
    int arr[500];
    cout << "Enter the elements of array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the element to search: ";
    cin >> target;

    int ans = elemInfiniteArr(arr, n, target);

    if (ans != -1)
        cout << "The element is present at index: " << ans;
    else
        cout << "The element is not present";

    return 0;
}