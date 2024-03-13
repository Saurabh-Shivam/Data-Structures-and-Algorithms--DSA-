#include <iostream>
#include <vector>
using namespace std;

int findSqrt(int n)
{
    int target = n;
    int ans = -1;
    int start = 0;
    int end = n;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (mid * mid == target)

            return mid;
        // search left
        else if (mid * mid > target)

            end = mid - 1;

        else
        {
            // store ans
            ans = mid;
            // search right
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int result = findSqrt(n);
    cout << "The square root of with integer value only " << n << " is " << result << endl;

    int precision;
    cout << "Enter the number of floating digits in precision: ";
    cin >> precision;

    double finalResult = findSqrt(n);

    double step = 0.1;

    for (int i = 0; i < precision; i++)
    {
        for (double j = finalResult; j * j <= n; j = j + step)
        {
            finalResult = j;
        }
        step = step / 10;
    }

    cout << "The final square root of " << n << " is " << finalResult << endl;

    return 0;
}