#include <iostream>
#include <vector>
using namespace std;

// Time Complexity: O(n^2)
// Space Complexity: O(1)
int numIdenticalPairs(vector<int> &nums)
{
    int goodPairs = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int j = n - 1;
        while (i < j)
        {
            if (nums[i] == nums[j])
                goodPairs++;
            j--;
        }
    }

    return goodPairs;
}
int main()
{

    return 0;
}