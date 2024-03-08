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

void wavePrintMatrix(vector<vector<int>> arr)
{
  int rowSize = arr.size();
  int colSize = arr[0].size();
  for (int startCol = 0; startCol < rowSize; startCol++)
  {
    // even no of col -> Top to bottom print
    if ((startCol & 1) == 0)
    {
      for (int i = 0; i < rowSize; i++)
      {
        cout << arr[i][startCol] << " ";
      }
    }
    // odd no of col -> Bottom to top
    else
    {
      for (int i = rowSize - 1; i >= 0; i--)
      {
        cout << arr[i][startCol] << " ";
      }
    }
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
  wavePrintMatrix(arr);

  return 0;
}