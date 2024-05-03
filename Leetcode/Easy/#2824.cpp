#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countPairs(vector<int> &nums, int target)
{
    // Time Complexity: O(n^2)
    // Space Complexity: O(1)
    // int count = 0;
    // int n = nums.size();
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (nums[i] + nums[j] < target)
    //             count++;
    //     }
    // }
    // return count;
    // Optimising the code to O(n) time complexity
    sort(nums.begin(), nums.end());
    int count = 0;
    int start = 0;
    int end = nums.size() - 1;

    while (start < end)
    {
        int sum = nums[start] + nums[end];
        if (sum < target)
        {
            // All the elements from start to end-1 will form a pair with nums[end]
            count += end - start;
            start++;
        }
        else
        {
            end--;
        }
    }

    return count;
}

int main()
{

    return 0;
}