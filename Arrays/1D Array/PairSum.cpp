#include <iostream>
#include <vector>
using namespace std;

int pairSum(vector<int> arr, int sum)
{
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            // all the pairs will be printed
            // cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
            if (arr[i] + arr[j] == sum)
            {
                // pair sum will be printed
                // cout << arr[i] << "," << arr[j] << " ";
                count++;
            }
        }
    }

    return count;
}

int main()
{

    int n;
    cout << "Enter the number of elements:" << endl;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of array:" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int sum;
    cout << "Enter the sum to find in array:" << endl;
    cin >> sum;

    int ans = pairSum(arr, sum);
    cout << endl
         << ans;

    return 0;
}