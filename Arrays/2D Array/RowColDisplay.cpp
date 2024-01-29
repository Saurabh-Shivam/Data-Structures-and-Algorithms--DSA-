#include <iostream>
using namespace std;

void displayRowWise(int arr[][500], int rows, int cols)
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

void displayColWise(int arr[][500], int rows, int cols)
{

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
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
    cout << "Displaying array row-wise: " << endl;
    displayRowWise(arr, rows, cols);

    cout << endl;
    cout << "Displaying array column-wise: " << endl;
    displayColWise(arr, rows, cols);

    return 0;
}