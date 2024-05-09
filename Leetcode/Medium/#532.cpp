#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

class Solution
{
public:
    int binarySearch(vector<int> arr, int start, int target)
    {
        int end = arr.size() - 1;
        int mid = start + (end - start) / 2;

        while (start <= end)
        {
            if (arr[mid] == target)
            {
                return mid;
            }
            else if (arr[mid] > target)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
            mid = start + (end - start) / 2;
        }
        return -1;
    }

    int findPairs(vector<int> &arr, int k)
    {
        // Brute Force Approach
        // Time Complexity: O(n^2)
        // Space Complexity: O(1)
        // int count = 0;
        // for (int i = 0; i < arr.size() - 1; i++)
        // {
        //     for (int j = i + 1; i < arr.size() - 1; j++)
        //     {
        //         if (abs(arr[i] - arr[j]) == k)
        //             count++;
        //     }
        // }
        // return count;

        // Method 1: Using Two Pointer Approach
        // Time Complexity: O(nlogn)
        // Space Complexity: O(n)
        //     sort(arr.begin(), arr.end());
        //     int i=0, j=1;
        //     // int count = 0;
        //     set<pair<int, int>>ans;
        //     while(j<arr.size()){
        //         int diff = arr[j] - arr[i];
        //         if(diff == k){
        //            // cout<<arr[i]<<" "<<arr[j]<<endl;
        //            // count++;
        //            ans.insert({arr[i], arr[j]});
        //             i++,j++;
        //         }
        //         else if(diff > k){
        //             i++;
        //         }
        //         else{
        //             j++;
        //         }

        //        // handling the case to prevent difference of same number with itself
        //        if(i == j){
        //         j++;
        //        }
        //     }
        //    // return count;
        //    return ans.size();

        // Method 2: Solving with the help of binary search
        // Time Complexity: O(nlogn)
        // Space Complexity: O(n)
        sort(arr.begin(), arr.end());
        set<pair<int, int>> ans;
        for (int i = 0; i < arr.size(); i++)
        {
            if (binarySearch(arr, i + 1, arr[i] + k) != -1)
            {
                ans.insert({arr[i], arr[i] + k});
            }
        }
        return ans.size();
    }
};

int main()
{

    return 0;
}