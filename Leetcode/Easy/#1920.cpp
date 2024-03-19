#include <iostream>
#include <vector>
using namespace std;

// Time Complexity: O(n)
// Space Complexity: O(n)
// TODO : Need to optimise the code space complexity to O(1)
vector<int> buildArray(vector<int> &nums)
{
    vector<int> ans;
    int n = nums.size();
    for (int i = 0; i < n; i++)
        ans.push_back(nums[nums[i]]);

    return ans;
}

int main()
{

    return 0;
}