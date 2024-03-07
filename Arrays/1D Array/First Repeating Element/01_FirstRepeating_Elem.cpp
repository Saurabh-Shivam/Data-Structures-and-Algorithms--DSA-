// input->arr = 1, 5, 3, 4, 3, 5, 6
// output-> 2
// NOTE: The position we return should be according to 1 based indexing

// checking each occurance
#include <iostream>
#include <vector>
using namespace std;

// Time Complexity -> O(n^2)
// Space Complexity -> O(1)
int firstRepeatElem(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        bool isRepeated = false;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                isRepeated = true;
                return i + 1;
            }
        }
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
    {
        cin >> arr[i];
    }

    cout << "The first repeating element is at: " << firstRepeatElem(arr) << " position";

    return 0;
}