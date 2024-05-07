#include <iostream>
#include <vector>
using namespace std;

int findPivot(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {

        // single element
        if (s == e)
            return s;
        // handle middle 2 cases independently where sorted order breaks
        // Here we have added mid + 1 < e and mid - 1 >= 0 to check whether mid is inside the range of array
        if (mid <= e && arr[mid] > arr[mid + 1])
            return mid;
        if (mid - 1 >= s && arr[mid - 1] > arr[mid])
            return mid - 1;

        // mid present in right subarray and rotation present in left of mid
        if (arr[s] > arr[mid])
            e = mid - 1;
        // mid present in left subarray and rotation present in right of mid
        else
            s = mid + 1;

        mid = s + (e - s) / 2;
    }
    return -1;
}

int binarySearch(vector<int> arr, int s, int e, int target)
{
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[mid] > target)
            e = mid - 1;
        else
            s = mid + 1;
        mid = s + (e - s) / 2;
    }
    return -1;
}

// Time Complexity: O(log n)
int search(vector<int> &nums, int target)
{
    int pivotIndex = findPivot(nums);
    int ans = 0;
    // left side checking
    if (target >= nums[0] && target <= nums[pivotIndex])
    {
        ans = binarySearch(nums, 0, pivotIndex, target);
    }
    // right side checking
    else
    {
        // pivotIndex + 1 < n && target >= arr[pivotIndex + 1] && target <= arr[n - 1]
        ans = binarySearch(nums, pivotIndex + 1, nums.size() - 1, target);
    }

    return ans;
}

int main()
{

    return 0;
}