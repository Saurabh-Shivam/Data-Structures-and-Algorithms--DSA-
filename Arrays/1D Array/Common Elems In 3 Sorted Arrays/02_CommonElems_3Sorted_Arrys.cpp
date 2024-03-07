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
#include <set>
using namespace std;

// for accessing set we use auto keyword
void display(set<int> arr)
{
    for (auto i : arr)
        cout << i << " ";
}

// solving with the help of sets to prevent the duplicate elements print multiple times
// NOTE: Set is like an array but it's not an array
// Here we have taken an additional data structure -> set, need to solve without using any other data structure
// Time Complexity -> O(n)
// Space Complexity -> O(min(arr, brr, crr))
void commonElements(vector<int> arr, vector<int> brr, vector<int> crr)
{
    set<int> ans;
    int i = 0, j = 0, k = 0;
    while (i < arr.size() && j < brr.size() && k < crr.size())
    {
        if (arr[i] == brr[j] && brr[j] == crr[k])
        {
            // cout << arr[i] << " ";
            ans.insert(arr[i]);
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