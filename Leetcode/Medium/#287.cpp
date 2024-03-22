#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int> &nums)
{
    // USING STL SORT LIBRARY
    // Time Complexity -> O(nlogn)
    // Space Complexity -> O(n)

    // sort(nums.begin(), nums.end());
    // int ans = -1;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     if (nums[i] == nums[i + 1])
    //     {
    //         ans = nums[i];
    //         return ans;
    //     }
    //     }
    // return ans;

    // VISITED METHOD
    // Time Complexity -> O(n)
    // Space Complexity -> O(1)
    // Here we are modifying the array/vector
    // int ans = -1;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     // abs() will make the element positive
    //     int index = abs(arr[i]);
    //     // already visited
    //     if (arr[index] < 0)
    //     {
    //         ans = index;
    //         break;
    //     }

    //     // marking as visited
    //     arr[index] *= -1;
    // }

    // return ans;

    // POSITIONING METHOD
    // Time Complexity -> O(n)
    // Space Complexity -> O(1)
    // Here also we are modifying the array/vector
    while (nums[0] != nums[nums[0]])
        swap(nums[0], nums[nums[0]]);

    return nums[0];
}

int main()
{

    return 0;
}