#include <iostream>
#include <vector>
using namespace std;

vector<int> runningSum(vector<int> &nums)
{
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    // vector<int> ans;
    // int sum = 0;
    // int n = nums.size();
    // for (int i = 0; i < n; i++)
    // {
    //     sum += nums[i];
    //     ans.push_back(sum);
    // }

    // return ans;

    // Optimising the space complexity to O(1)
    for (int i = 1; i < nums.size(); i++)
        nums[i] += nums[i - 1];

    return nums;
}
int main()
{

    return 0;
}