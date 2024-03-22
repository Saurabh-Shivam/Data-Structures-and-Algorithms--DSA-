#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int> &nums)
{
    // Brute Force -> Using Linear Search
    // Time Complexity: O(n)
    // Space Complexity: O(1)
    //  int ans = -1;
    //  for(int i = 0; i < nums.size(); i++){
    //      if(nums[i] < nums[i + 1] && nums[i + 1] > nums[i + 2]){
    //          ans = i + 1;
    //          break;
    //      }
    //  }
    // return ans;

    // Optimised -> Using Binary Search
    // Time Complexity: O(log n)
    // Space Complexity: O(1)
    int start = 0;
    int end = nums.size() - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (nums[mid] < nums[mid + 1])
            start = mid + 1;
        else
            end = mid;
        mid = start + (end - start) / 2;
    }

    return start;
}

int main()
{

    return 0;
}