#include <iostream>
#include <vector>
using namespace std;

// brute force approach
void findMajority(vector<int> arr)
{
    int maxCount = 0;
    int index = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
                count++;
        }

        // update maxCount if count of current element is greater
        if (count > maxCount)
        {
            maxCount = count;
            index = i;
        }
    }

    // if maxCount is greater than n/2 return the corresponding element
    if (maxCount > arr.size() / 2)
        cout << "Majority Element is: " << arr[index] << endl;

    else
        cout << "No Majority Element" << endl;
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

    findMajority(arr);

    return 0;
}