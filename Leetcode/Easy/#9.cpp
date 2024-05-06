#include <iostream>
#include <vector>
using namespace std;

// Time Complexity -> O(n)
// Space Complexity -> O(1)
bool isPalindrome(int x)
{
    if (x < 0)
    {
        return false;
    }

    // to prevent overflow in case of large input numbers
    long long reversed = 0;
    long long temp = x;

    while (temp != 0)
    {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }

    return (reversed == x);
}

int main()
{

    return 0;
}