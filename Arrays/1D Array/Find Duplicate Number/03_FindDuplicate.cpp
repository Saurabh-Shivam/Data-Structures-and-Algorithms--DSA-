#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// POSITIONING METHOD
// Time Complexity -> O(n)
// Space Complexity -> O(1)
// Here also we are modifying the array/vector
int findDuplicate(vector<int> arr)
{
    while (arr[0] != arr[arr[0]])
    {
        swap(arr[0], arr[arr[0]]);
    }

    return arr[0];
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