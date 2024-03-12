#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int firstOccurElem(vector<int> arr, int target)
{
    int index = -1;
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        // store the answer in index and serach left side
        if (arr[mid] == target)
        {
            index = mid;
            end = mid - 1;
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

int totaltOccurElem(vector<int> arr, int target)
{

    int firstOccur = firstOccurElem(arr, target);
    int lastOccur = lastOccurElem(arr, target);

    return (lastOccur - firstOccur + 1);
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

    int result = totaltOccurElem(arr, target);
    cout << "The total number occurance of the element " << target << " is " << result << endl;

    // using stl function
    auto firstOccur = lower_bound(arr.begin(), arr.end(), target);
    auto lasttOccur = upper_bound(arr.begin(), arr.end(), target);
    int result2 = lasttOccur - firstOccur;

    cout << "The total number occurance of the element " << target << " is " << result2 << endl;

    return 0;
}