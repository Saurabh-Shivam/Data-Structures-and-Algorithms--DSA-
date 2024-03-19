#include <iostream>
#include <vector>
using namespace std;

// Time Complexity: O(n)
// Space Complexity: O(n)
vector<int> getConcatenation(vector<int> &nums)
{
    vector<int> ans;
    int loopTrav = 0;
    int n = nums.size() - 1;
    for (int i = 0; i <= n && loopTrav <= n * 2 + 1; i++)
    {
        ans.push_back(nums[i]);
        loopTrav++;
        if (i == n)
            i = -1;
    }

    return ans;
}

int main()
{

    return 0;
}