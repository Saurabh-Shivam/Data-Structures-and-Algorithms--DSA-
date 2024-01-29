#include <iostream>
using namespace std;

void displayRowSum(int arr[][500], int rows, int cols)
{

    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
}

void displayColSum(int arr[][500], int rows, int cols)
{

    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum += arr[j][i];
        }
        cout << sum << " ";
    }
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

    cout << endl;
    cout << "Displaying row-wise sum: " << endl;
    displayRowSum(arr, rows, cols);

    cout << endl;
    cout << "Displaying col-wise sum: " << endl;
    displayColSum(arr, rows, cols);

    return 0;
}