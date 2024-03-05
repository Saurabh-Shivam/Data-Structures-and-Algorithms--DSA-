#include <iostream>
#include <vector>
using namespace std;

// VISITED METHOD
// Time Complexity -> O(n)
// Space Complexity -> O(1)
// Here we are modifying the array/vector
int findDuplicate(vector<int> arr)
{
    int ans = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        // abs() will make the element positive
        int index = abs(arr[i]);
        // already visited
        if (arr[index] < 0)
        {
            ans = index;
            break;
        }

        // marking as visited
        arr[index] *= -1;
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