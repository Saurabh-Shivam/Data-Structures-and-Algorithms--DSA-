#include <iostream>
#include <vector>
using namespace std;

void tripletSum(vector<int> arr, int sum)
{

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                if (arr[i] + arr[j] + arr[k] == sum)
                    cout << arr[i] << "," << arr[j] << "," << arr[k] << endl;
            }
        }
    }
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

    tripletSum(arr, sum);

    return 0;
}