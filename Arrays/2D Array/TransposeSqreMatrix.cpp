#include <iostream>
using namespace std;

void display(int arr[][500], int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void transposeSquare(int arr[][500], int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    display(arr, size);
}

int main()
{

    int size;
    cout << "Enter the size of your square matrix:" << endl;
    cin >> size;

    // taking input in 2d array
    int arr[500][500];
    cout << "Enter the elements of array:" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << endl
         << "Square matrix before transpose" << endl;
    display(arr, size);

    cout << endl
         << "Square matrix after transpose" << endl;
    transposeSquare(arr, size);

    return 0;
}