#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    // TODO: Solve this in less than O(n^2) Time Complexity
    // Time Complexity: O(n^2)
    // Space Complexity: O(1)
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                return {i, j};
            }
        }
    }
    // if no sum pair is found
    return {};
}
int main()
{

    return 0;
}