// input1 -> arr1 = 1, 5, 10, 20, 40, 80
//          arr2 = 6, 7, 20, 80, 100
//          arr3 = 3, 4, 15, 20, 30, 70, 80, 120
// output1 -> 20, 80

// input2 -> arr1 = 3, 3, 3
//          arr2 = 3, 3, 3
//          arr3 = 3, 3, 3
// output2 -> 3

#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

// TODO: Solve this by removing the duplicate elements from the array
// Time Complexity -> O(n)
// Space Complexity -> O(min(arr, brr, crr))
void commonElements(vector<int> arr, vector<int> brr, vector<int> crr)
{
    vector<int> ans;
    int i = 0, j = 0, k = 0;
    while (i < arr.size() && j < brr.size() && k < crr.size())
    {
        if (arr[i] == brr[j] && brr[j] == crr[k])
        {
            // cout << arr[i] << " ";
            ans.push_back(arr[i]);
            i++, j++, k++;
        }
        else if (arr[i] < brr[j])
            i++;
        else if (brr[j] < crr[k])
            j++;
        else
            k++;
    }

    display(ans);
}

int main()
{
    vector<int> arr{1, 5, 10, 20, 40, 80};
    vector<int> brr{6, 7, 20, 80, 100};
    vector<int> crr{3, 4, 15, 20, 30, 70, 80, 120};
    cout << "The common elements in first 3 sorted arrays are: ";
    commonElements(arr, brr, crr);

    cout << endl;

    vector<int> a{3, 3, 3};
    vector<int> b{3, 3, 3};
    vector<int> c{3, 3, 3};
    cout << "The common elements in second 3 sorted arrays are: ";
    commonElements(a, b, c);

    return 0;
}