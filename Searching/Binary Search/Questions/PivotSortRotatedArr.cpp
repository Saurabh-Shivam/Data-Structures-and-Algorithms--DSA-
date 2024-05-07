#include <iostream>
#include <vector>
using namespace std;

// test case -> n = 9, arr = {5, 6, 7, 8, 9, 10, 1, 2, 3} and output = 10

int pivot(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        // single element
        if (s == e)
            return s;
        // handle middle 2 cases independently where sorted order breaks
        // Here we have added mid + 1 < e and mid - 1 >= 0 to check whether mid is inside the range of array
        if (mid <= e && arr[mid] > arr[mid + 1])
            return mid;
        if (mid - 1 >= s && arr[mid - 1] > arr[mid])
            return mid - 1;

        // mid present in right subarray and rotation present in left of mid
        if (arr[s] > arr[mid])
            e = mid - 1;
        // mid present in left subarray and rotation present in right of mid
        else
            s = mid + 1;

        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{

    int n;
    cout << "Enter the number of elements:" << endl;
    cin >> n;

    // taking input in vector
    vector<int> arr(n);
    cout << "Enter the elements of array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = pivot(arr);
    cout << "The pivot element is: " << arr[ans] << " and is present at index " << ans << endl;
    return 0;
}