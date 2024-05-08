#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &arr)
    {
        vector<int> ans;
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
                ans.push_back(arr[startingRow][i]);
                count++;
            }
            startingRow++;

            // print endingCol
            for (int i = startingRow; i <= endingRow && count < total_elements; i++)
            {
                ans.push_back(arr[i][endingCol]);
                count++;
            }
            endingCol--;

            // print endingRow
            for (int i = endingCol; i >= startingCol && count < total_elements; i--)
            {
                ans.push_back(arr[endingRow][i]);
                count++;
            }
            endingRow--;

            // print startingCol
            for (int i = endingRow; i >= startingRow && count < total_elements; i--)
            {
                ans.push_back(arr[i][startingCol]);
                count++;
            }
            startingCol++;
        }

        return ans;
    }
};

int main()
{

    return 0;
}