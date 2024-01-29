#include <iostream>
using namespace std;

bool linearSearch(int arr[][500], int rows, int cols, int key)
{

    for (int i = 0; i < rows; i++)
    {
        bool flag = true;
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == key)
            {
                cout << "\nElement is present at "
                     << i << " row and " << j << " column";
                return true;
            }
        }
    }

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

    int key;
    cout << "Enter the number for search:" << endl;
    cin >> key;

    int ans = linearSearch(arr, rows, cols, key);
    if (ans)
    {

        // cout << "\n Element is present\n";
    }
    else
    {

        cout << "\nElement is absent\n";
    }

    return 0;
}