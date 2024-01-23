#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void display(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

//  Dutch National Flag Problem
void sort0and1(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int i = 0;
    while (i != end)
    {

        if (arr[i] == 0)
        {
            swap(arr[i], arr[start]);
            start++;
            i++;
        }
        else
        {
            swap(arr[i], arr[end]);
            end--;
        }
    }

    display(arr);
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

    cout << "Before sorting: " << endl;
    display(arr);

    cout << endl
         << "After sorting: " << endl;
    sort0and1(arr);

    return 0;
}