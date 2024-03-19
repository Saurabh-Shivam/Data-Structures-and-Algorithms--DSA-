#include <iostream>
#include <vector>
using namespace std;

int finalValueAfterOperations(vector<string> &operations)
{
    int n = operations.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (operations[i] == "++X" || operations[i] == "X++")
            count = count + 1;
        // if (operations[i] == "--X" || operations[i] == "X--")
        else
            count = count - 1;
    }

    return count;
}
int main()
{

    return 0;
}