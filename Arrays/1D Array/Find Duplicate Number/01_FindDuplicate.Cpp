#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// USING STL SORT LIBRARY
// Time Complexity -> O(nlogn)
// Space Complexity -> O(n)
int findDuplicate(vector<int> arr)
{
    sort(arr.begin(), arr.end() - 1);
    int ans = -1;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == arr[i + 1])
        {
            ans = arr[i];
            return ans;
        }
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    // taking input in vector
    vector<int> arr(n);
    cout << "Enter the elements of array: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int result = findDuplicate(arr);
    cout << "The Duplicate Element is: " << result;

    return 0;
}