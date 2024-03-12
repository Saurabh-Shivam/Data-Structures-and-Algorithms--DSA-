#include <iostream>
#include <vector>
using namespace std;

// Time Complexity -> O(log n)
int lastOccurElem(vector<int> arr, int target)
{
    int index = -1;
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        // store the answer in index and serach right side
        if (arr[mid] == target)
        {
            index = mid;
            start = mid + 1;
        }
        // serach right side
        else if (arr[mid] < target)
            start = mid + 1;
        // arr[mid] > target -> search left side
        else
            end = mid - 1;

        mid = start + (end - start) / 2;
    }

    return index;
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

    int result = lastOccurElem(arr, target);

    cout << "The last occurance of the element " << target << " is at index " << result;

    return 0;
}