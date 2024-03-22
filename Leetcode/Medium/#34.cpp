#include <iostream>
#include <vector>
using namespace std;

// Time Complexity: O(log n)
// Space Complexity: O(1)
vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> ans;
    int firstIndex = firstOccur(nums, target);
    int lastIndex = lastOccur(nums, target);
    ans.push_back(firstIndex);
    ans.push_back(lastIndex);

    return ans;
}

int firstOccur(vector<int> nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    int mid = start + (end - start) / 2;
    int index = -1;
    while (start <= end)
    {
        if (nums[mid] == target)
        {
            index = mid;
            end = mid - 1;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        // nums[mid] > target
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return index;
}

int lastOccur(vector<int> nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    int mid = start + (end - start) / 2;
    int index = -1;
    while (start <= end)
    {
        if (nums[mid] == target)
        {
            index = mid;
            start = mid + 1;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        // nums[mid] > target
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return index;
}

int main()
{

    return 0;
}