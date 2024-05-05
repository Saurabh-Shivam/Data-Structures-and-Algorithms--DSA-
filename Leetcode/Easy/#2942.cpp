#include <iostream>
#include <vector>
using namespace std;

vector<int> findWordsContaining(vector<string> &words, char x)
{
    // Time Complexity -> O(n^2)
    // Space Complexity -> O(n)
    vector<int> ans;
    int n = words.size();
    for (int i = 0; i < n; i++)
    {
        string elem = words[i];
        for (auto j : elem)
        {
            if (j == x)
            {
                ans.push_back(i);
                break;
            }
        }
    }

    return ans;
}

int main()
{

    return 0;
}