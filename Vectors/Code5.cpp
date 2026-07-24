// Single Number - LeetCode Question
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int ans = 0;
    vector<int> vec = {2, 1, 1, 2, 4};

    for (int val : vec)
    {
        ans = ans ^ val;
    }

    cout << "The unique value is: " << ans;
    
    return 0;
}