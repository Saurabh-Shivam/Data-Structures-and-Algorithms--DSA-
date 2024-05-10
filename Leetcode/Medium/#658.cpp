#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int lowerBound(vector<int> arr, int x)
    {
        int start = 0;
        int end = arr.size() - 1;
        int lb = end;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (arr[mid] >= x)
            {
                lb = mid;
                end = mid - 1;
            }
            else if (x > arr[mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return lb;
    }

    // TIme Complexity: O(log n+k) -> O(n)
    // Space Complexity: O(k)
    vector<int> bs_method(vector<int> &arr, int k, int x)
    {
        int high = lowerBound(arr, x);
        int low = high - 1;
        while (k--)
        {
            if (low < 0)
                high++;
            else if (high >= arr.size())
                low--;
            else if (x - arr[low] > arr[high] - x)
                high++;
            else
                low--;
        }

        return vector<int>(arr.begin() + low + 1, arr.begin() + high);
    }

    // TIme Complexity: O(n-k) -> O(n)
    // Space Complexity: O(k)
    vector<int> twoPointerMethod(vector<int> &arr, int k, int x)
    {
        int low = 0;
        int high = arr.size() - 1;
        while (high - low >= k)
        {
            if (x - arr[low] > arr[high] - x)
                low++;
            else
                high--;
        }

        vector<int> ans;
        for (int i = low; i <= high; i++)
        {
            ans.push_back(arr[i]);
        }

        return ans;
        // we can also write like this
        // return vector<int>(arr.begin()+low, arr.begin()+high+1 );
    }

    vector<int> findClosestElements(vector<int> &arr, int k, int x)
    {
        // return twoPointerMethod(arr, k, x);
        return bs_method(arr, k, x);
    }
};

int main()
{

    return 0;
}