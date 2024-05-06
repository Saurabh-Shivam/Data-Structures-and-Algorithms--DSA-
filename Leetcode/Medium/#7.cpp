#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Time Complexity -> O(n)
// Space Complexity -> O(1)
int reverse(int x)
{
    int rem = 0;
    int rev = 0;
    while (x != 0)
    {
        // check 32 bit range if rev is outside the range then return 0
        if (rev > INT_MAX / 10 || rev < INT_MIN / 10)
        {
            return 0;
        }
        else
        {
            rem = x % 10;
            rev = rev * 10 + rem;
            x = x / 10;
        }
    }

    return rev;
}

int main()
{
    return 0;
}