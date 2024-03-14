#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(vector<vector<int>> arr, int target)
{
    int rows = arr.size();
    int cols = arr[0].size();
    int total = rows * cols;
    int start = 0;
    int end = total - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        int rowIndex = mid / cols;
        int colIndex = mid % cols;
        if (target == arr[rowIndex][colIndex])
        {
            cout << "Element found at " << rowIndex << "th row and " << colIndex << "th column" << endl;
            return true;
        }
        else if (target < arr[rowIndex][colIndex])
            end = mid - 1;
        else
            start = mid + 1;
        mid = start + (end - start) / 2;
    }

    cout << "Element not found" << endl;
    return false;
}

int main()
{
    int rows;
    cout << "Enter the number of rows:" << endl;
    cin >> rows;

    int cols;
    cout << "Enter the number of columns:" << endl;
    cin >> cols;

    // taking input in 2d vector
    vector<vector<int>> arr(rows, vector<int>(cols));
    cout << "Enter the elements of array:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    int target;
    cout << "Enter the target element:" << endl;
    cin >> target;
    binarySearch(arr, target);

    return 0;
}