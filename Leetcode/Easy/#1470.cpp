#include <iostream>
#include <vector>
using namespace std;

vector<int> shuffle(vector<int> &nums, int n)
{
    // TODO: Try to solve this in O(1) space complexity
    // Time Complexity -> O(n)
    // Space Complexity -> O(n)
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        ans.push_back(nums[i]);
        ans.push_back(nums[i + n]);
    }
    return ans;
}

int main()
{

    return 0;
}