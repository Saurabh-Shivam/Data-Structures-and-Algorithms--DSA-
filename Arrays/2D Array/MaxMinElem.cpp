#include <iostream>
#include <climits>
using namespace std;

void max_minElem(int arr[][500], int rows, int cols)
{
    int maxi = INT_MIN;
    int mini = INT_MAX;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > maxi)
            {
                maxi = arr[i][j];
            }
            if (arr[i][j] < mini)
            {
                mini = arr[i][j];
            }
        }
    }

    cout << "Maximum Element is: " << maxi << endl
         << "Minimum element is: " << mini << endl;
}

int main()
{

    int rows;
    cout << "Enter the number of rows:" << endl;
    cin >> rows;

    int cols;
    cout << "Enter the number of columns:" << endl;
    cin >> cols;

    // taking input in 2d array
    int arr[500][500];
    cout << "Enter the elements of array:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    max_minElem(arr, rows, cols);

    return 0;
}