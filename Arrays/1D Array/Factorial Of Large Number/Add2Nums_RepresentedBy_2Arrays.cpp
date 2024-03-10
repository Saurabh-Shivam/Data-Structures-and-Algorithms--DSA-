// Input1 -> a[] = {1, 2}, b[] = { 2, 1}, Input2 -> a[] = { 9, 5, 4, 9}, b[] = { 2, 1, 4}
// Output1 -> 33, Output2 -> 9763

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// TODO: Problem in this code fix this as output is not correct
void calcSum(vector<int> arr, vector<int> brr)
{
    int carry = 0;
    string ans;
    int i = arr.size() - 1;
    int j = brr.size() - 1;
    // when both the arrays are of same size
    while (i >= 0 && j >= 0)
    {
        int x = arr[i] + brr[j] + carry;
        int digit = x % 10;
        // for chaning digits to character we are doing this
        ans.push_back(digit + '0');
        carry = x / 10;
        i--;
        j--;
    }

    // when the size of first array is greater
    while (i >= 0)
    {
        int x = arr[i] + 0 + carry;
        int digit = x % 10;
        // for chaning digits to character we are doing this
        ans.push_back(digit + '0');
        carry = x / 10;
        i--;
    }

    // when the size of second array is greater
    while (j >= 0)
    {
        int x = 0 + brr[j] + carry;
        int digit = x % 10;
        // for chaning digits to character we are doing this
        ans.push_back(digit + '0');
        carry = x / 10;
        j--;
    }

    if (carry)
    {
        ans.push_back(carry + '0');
    }

    while (ans[ans.size() - 1] == '0')
    {
        ans.pop_back();
    }

    // bcz the answer stored in ans string is reversed so need to fix this
    reverse(ans.begin(), ans.begin());

    cout << ans;
}

int main()
{
    int n1;
    cout << "Enter the number of elements in first vector: ";
    cin >> n1;
    int n2;
    cout << "Enter the number of elements in second vector: ";
    cin >> n2;

    // taking input in vector
    vector<int> arr(n1);
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n1; i++)
        cin >> arr[i];

    // taking input in vector
    vector<int> brr(n2);
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n2; i++)
        cin >> brr[i];

    calcSum(arr, brr);
    return 0;
}