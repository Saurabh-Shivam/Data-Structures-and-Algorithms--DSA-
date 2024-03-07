// input->arr = 1, 5, 3, 4, 3, 5, 6
// output-> 2
// NOTE: The position we return should be according to 1 based indexing

// with the help of hashing/counting the number of occurance of each element and storing it
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Time Complexity -> O(n)
// Space Complexity -> O(n)
int firstRepeatElem(vector<int> arr)
{
    unordered_map<int, int> hash;
    for (int i = 0; i < arr.size(); i++)
        hash[arr[i]]++;

    for (int i = 0; i < arr.size(); i++)
    {
        if (hash[arr[i] > 1])
            return i + 1;
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