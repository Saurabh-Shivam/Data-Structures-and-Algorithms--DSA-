// Given an array A[] consisting of only 0s, 1s, and 2s. The task is to write a function that sorts the given array. The functions should put all 0s first, then
// all 1s and all 2s in last.

// This problem is also the same as the famous “Dutch National Flag problem”. The problem was proposed by Edsger Dijkstra. The problem is as follows:
// Given N balls of colour red, white or blue arranged in a line in random order.You have to arrange all the balls such that the balls with the same colours are
// adjacent with the order of the balls, with the order of the colours being red, white and blue(i.e., all red coloured balls come first then the white coloured
// balls and then the blue coloured balls).
// Red Ball -> 0, White Ball -> 1, Blue Ball -> 2
// Input: {0, 1, 2, 0, 1, 2}
// Output: {0, 0, 1, 1, 2, 2}

// Input: {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1}
// Output: {0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2}

#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i]<<" ";
    }
}

void sort0_1and2(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int i = 0;

    while (i <= end)
    {
        if (arr[i] == 0)
        {
            swap(arr[start], arr[i]);
            start++;
            i++;
        }

        else if (arr[i] == 2)
        {
            swap(arr[end], arr[i]);
            end--;
        }

        else
        {
            i++;
        }
    }

    display(arr);
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

    sort0_1and2(arr);

    return 0;
}