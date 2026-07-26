// Maximum sub array sum using Kadane's Algorithm - optimized method - leetcode
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, -3, -4, 6, 12, -2};
    int maximum_sum = INT8_MIN;
    int current_sum = 0;

    for (int val : vec)
    {
        current_sum += val;
        maximum_sum = max(maximum_sum, current_sum);

        if (current_sum < 0)
        {
            current_sum = 0;
        }
    }
    cout << "The maximum sum of sub array is: " << maximum_sum;

    return 0;
}