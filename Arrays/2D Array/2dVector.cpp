#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // declaration
    vector<vector<int>> arr;
    vector<int> a{1, 2, 3};
    vector<int> b{4, 5, 6};
    vector<int> c{7, 8, 9};

    // insetion in 2D vector
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    // row-wise access in 2D vector
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;

    // row-wise access in 2D vector if number of elements in 1D vector are different
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        { // arr[i].size()
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;

    // initialising with 101
    vector<vector<int>> arr1(3, vector<int>(5, 101));
    for (int i = 0; i < arr1.size(); i++)
    {
        for (int j = 0; j < arr1[0].size(); j++)
        {
            cout << arr1[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;

    // initialising with -8
    vector<vector<int>> arr2(5, vector<int>(5, -8));
    for (int i = 0; i < arr2.size(); i++)
    {
        for (int j = 0; j < arr2[0].size(); j++)
        {
            cout << arr2[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;

    // Custom input in 2d vector
    int rows;
    cout << "Enter the number of rows:" << endl;
    cin >> rows;

    int cols;
    cout << "Enter the number of columns:" << endl;
    cin >> cols;
    vector<vector<int>> arr3(rows, vector<int>(cols));

    for (int i = 0; i < arr3.size(); i++)
    {
        for (int j = 0; j < arr3.size(); j++)
        {
            cin >> arr3[i][j];
        }
    }

    for (int i = 0; i < arr3.size(); i++)
    {
        for (int j = 0; j < arr3[0].size(); j++)
        {
            cout << arr3[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}