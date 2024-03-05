// Ques ->  Move all the negative numbers to left side of the array. NOTE: Oderder maintenance is not required

#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

// Time Complexity -> O(n)
// Space Complexity -> O(1)
void moveNegLeft(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;
    while (start < end)
    {
        if (arr[start] < 0)
            start++;
        else if (arr[end] > 0)
            end--;
        else
            swap(arr[start], arr[end]);
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

    cout << "Elements before the arrangement: ";
    display(arr);

    cout << "Elements after the arrangement: ";
    moveNegLeft(arr);
    display(arr);

    return 0;
}