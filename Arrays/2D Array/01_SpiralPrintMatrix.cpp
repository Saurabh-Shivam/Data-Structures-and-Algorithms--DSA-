#include <iostream>
#include <vector>
using namespace std;

void display(vector<vector<int>> arr)
{

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

void spiralPrintMatrix(vector<vector<int>> arr)
{
    // vector<int> ans;
    int row = arr.size();
    int col = arr[0].size();
    int total_elements = row * col;

    int startingRow = 0;
    int endingCol = col - 1;
    int endingRow = row - 1;
    int startingCol = 0;

    int count = 0;
    while (count < total_elements)
    {
        // print startingRow
        for (int i = startingCol; i <= endingCol && count < total_elements; i++)
        {
            // ans.push_back(arr[startingRow][i]);
            cout << arr[startingRow][i] << " ";
            count++;
        }

        startingRow++;

        // print endingCol
        for (int i = startingRow; i <= endingRow && count < total_elements; i++)
        {
            // ans.push_back(arr[i][endingCol]);
            cout << arr[i][endingCol] << " ";
            count++;
        }
        endingCol--;

        // print endingRow
        for (int i = endingCol; i >= startingCol && count < total_elements; i--)
        {
            // ans.push_back(arr[endingRow][i]);
            cout << arr[endingRow][i] << " ";
            count++;
        }
        endingRow--;

        // print startingCol
        for (int i = endingRow; i >= startingRow && count < total_elements; i--)
        {
            // ans.push_back(arr[i][startingCol]);
            cout << arr[i][startingCol] << " ";
            count++;
        }
        startingCol++;
    }

    // display(ans);
}

int main()
{

    int rows;
    cout << "Enter the number of rows:" << endl;
    cin >> rows;

    int cols;
    cout << "Enter the number of columns:" << endl;
    cin >> cols;
    vector<vector<int>> arr(rows, vector<int>(cols));

    cout << "Enter the elements in 2d array: " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Elements before wave print: " << endl;
    display(arr);

    cout << "Elements after wave print: " << endl;
    spiralPrintMatrix(arr);

    return 0;
}