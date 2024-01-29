#include <iostream>
using namespace std;

void display(int arr[][500], int rows, int cols)
{

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void transposeRect(int arr[][500], int rows, int cols)
{
    int ans[500][500];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            ans[j][i] = arr[i][j];
        }
    }

    display(ans, rows, cols);
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

    cout << endl
         << "Rectangular matrix before transpose" << endl;
    display(arr, rows, cols);

    cout << endl
         << "Rectangular matrix after transpose" << endl;
    transposeRect(arr, rows, cols);

    return 0;
}