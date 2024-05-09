#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int singleNonDuplicate(vector<int> &arr)
    // Time Complexity: O(log n)
    // Space Complexity: O(1)
    {
        int start = 0;
        int end = arr.size() - 1;
        int mid = start + (end - start) / 2;
        while (start <= end)
        {
            if (start == end)
                return arr[start];
            // when mid is even
            else if (mid % 2 == 0)
            {
                if (arr[mid] == arr[mid + 1])
                    start = mid + 2;
                else
                    end = mid;
            }
            // when mid is odd
            else
            {
                if (arr[mid] == arr[mid - 1])
                    start = mid + 1;
                else   
                    end = mid - 1;
            }

            mid = start + (end - start) / 2;
        }

        return -1;
    }
};
int main()
{

    return 0;
}