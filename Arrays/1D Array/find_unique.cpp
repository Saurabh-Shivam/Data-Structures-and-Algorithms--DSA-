#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector<int> arr)
{
    // here we have put ans = 0 bcz at start XOR of 0 with any digit is thst digit itself
    int ans = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        // bcz in case of XOR(^) operator it will do, with same digit -> 0, with different digit -> 1
        ans = ans ^ arr[i];
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

    int uniqueElem = findUnique(arr);
    cout << "The Unique Element is: " << uniqueElem;

    return 0;
}