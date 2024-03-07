// Ques.) Find the missing elements from an array with duplicates
// input1 -> arr = 1, 3, 5, 3, 4, input2 -> arr = 3, 3, 3, 3, 3
// output1 -> 2, output2 -> 1, 2, 4, 5
// Constraint -> arr[i] : [1, n], where n = size of array

// Sorting and Swapping Method
// Time Complexity -> O(n)
// Space Complexity -> O(1)
#include <iostream>
#include <vector>
using namespace std;

void missingElem(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int index = arr[i] - 1;
        if (arr[i] != arr[index])
            swap(arr[i], arr[index]);
    }

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // cout << endl;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != i + 1)
            cout << i + 1 << " ";
    }
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

    cout << "The Missing Element is: " << endl;
    missingElem(arr);

    return 0;
}