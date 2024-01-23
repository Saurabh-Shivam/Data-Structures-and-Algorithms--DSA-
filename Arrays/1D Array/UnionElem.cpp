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

bool isAlreadyPresent(int element, vector<int> ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] == element)
            return true;
    }
    return false;
}

void unionElem(vector<int> arr1, vector<int> arr2)
{

    vector<int> ans;
    for (int i = 0; i < arr1.size(); i++)
    {
        int element = arr1[i];
        bool check = isAlreadyPresent(element, ans);
        if (check == false)
            ans.push_back(element);
    }

    for (int j = 0; j < arr2.size(); j++)
    {
        int element = arr2[j];
        bool check = isAlreadyPresent(element, ans);
        if (check == false)
            ans.push_back(element);
    }

    display(ans);
}

int main()
{
    int n1;
    cout << "Enter the number of elements:" << endl;
    cin >> n1;

    vector<int> arr1(n1);
    cout << "Enter the elements of array:" << endl;
    for (int i = 0; i < arr1.size(); i++)
    {
        cin >> arr1[i];
    }

    int n2;
    cout << "Enter the number of elements:" << endl;
    cin >> n2;

    vector<int> arr2(n2);
    cout << "Enter the elements of array:" << endl;
    for (int i = 0; i < arr2.size(); i++)
    {
        cin >> arr2[i];
    }

    cout << endl;
    cout << "Elements of vector 1: ";
    display(arr1);

    cout << endl;
    cout << "Elements of vector 2: ";
    display(arr2);

    cout << endl;
    cout << "Elements after Union: " << endl;
    unionElem(arr1, arr2);

    return 0;
}