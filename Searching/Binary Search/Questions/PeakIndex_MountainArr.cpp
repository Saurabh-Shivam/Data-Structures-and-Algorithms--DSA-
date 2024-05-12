#include <iostream>
#include <vector>
using namespace std;

// Time Complexity -> O(log n)
int peakIndex(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        // search right
        if (arr[mid] < arr[mid + 1])
            start = mid + 1;
        else
            end = mid;

        mid = start + (end - start) / 2;
    }

    return start;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int result = peakIndex(arr);
    cout << "The peak element is at index " << result;

    return 0;
}