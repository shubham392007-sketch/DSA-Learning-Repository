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

/*
EXPLANATION OF THE CODE:

1. GOAL OF THE CODE:
    Find Maximum Subarray Sum using KADANE'S ALGORITHM.
    This is LeetCode 53. Maximum Subarray.
    This is the MOST OPTIMAL solution - O(n) time, O(1) space.

2. WHAT IS KADANE'S ALGORITHM?
    - Invented by Joseph Kadane.
    - The idea is simple: "If your current sum becomes negative, it is useless to carry it forward. Drop it and start fresh from 0."
    - Negative sum will only decrease the sum of future subarrays, so we reset it.

3. VARIABLES:
    int maximum_sum = INT8_MIN; -> Stores the final answer (max sum found so far).
    int current_sum = 0; -> Stores sum of current subarray we are exploring.

    BUG NOTE: Use INT_MIN not INT8_MIN.
    You need #include <climits> for INT_MIN.
    INT8_MIN is only -128. If array is [-500, -200], answer should be -200, but your code will give -128 (wrong).
    Correct: int maximum_sum = INT_MIN;

4. CORE LOGIC - ONLY ONE LOOP (O(n)):

    for (int val : vec) -> Go through each element once.
    {
        current_sum += val; -> Add current element to running sum.

        maximum_sum = max(maximum_sum, current_sum); -> Is current_sum better than best so far? Update.

        if (current_sum < 0)
        {
            current_sum = 0; -> KEY STEP: If sum becomes negative, discard it. Start new subarray from next element.
        }
    }

5. DRY RUN for your vec = {1, 2, -3, -4, 6, 12, -2}
    Start: current_sum=0, maximum_sum=-128

    val=1:  current_sum=0+1=1,  maximum_sum=max(-128,1)=1,  current_sum=1 (>0 so keep)
    val=2:  current_sum=1+2=3,  maximum_sum=max(1,3)=3,    current_sum=3
    val=-3: current_sum=3-3=0,  maximum_sum=max(3,0)=3,    current_sum=0 (>=0 keep)
    val=-4: current_sum=0-4=-4, maximum_sum=max(3,-4)=3,  current_sum=-4 (<0 so reset to 0)
    val=6:  current_sum=0+6=6,  maximum_sum=max(3,6)=6,    current_sum=6
    val=12: current_sum=6+12=18, maximum_sum=max(6,18)=18, current_sum=18
    val=-2: current_sum=18-2=16, maximum_sum=max(18,16)=18, current_sum=16

    Final maximum_sum = 18 from subarray [6,12] -> 6+12=18

6. WHY current_sum < 0 -> reset to 0?
    Imagine current_sum = -2. Next element is 5.
    If you carry -2, sum becomes -2+5=3
    If you start fresh, sum is 5.
    5 > 3, so fresh start is always better when current is negative.

7. TIME COMPLEXITY:
    - Brute Force (3 loops): O(n^3)
    - Better Brute Force (2 loops): O(n^2) -> your previous code
    - Kadane's (1 loop): O(n) -> BEST

8. IMPORTANT EDGE CASE - All negative numbers:
    Example: vec = {-1, -2, -3}
    This version of Kadane's with reset to 0 will FAIL if you initialize maximum_sum = 0.
    But you initialized with INT8_MIN (should be INT_MIN), so it works correctly.
    Dry run:
    val=-1: cur=-1, max=max(-inf,-1)=-1, cur<0 reset to 0
    val=-2: cur=-2, max=max(-1,-2)=-1, reset
    val=-3: cur=-3, max=max(-1,-3)=-1
    Final answer -1 which is correct (largest single element).

    If you had started maximum_sum=0, answer would be 0 (wrong for all negative).

9. LEETCODE VERSION:
    For LeetCode 53, you just write this logic inside a function:

    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN, currSum = 0;
        for(int val : nums){
            currSum += val;
            maxSum = max(maxSum, currSum);
            if(currSum < 0) currSum = 0;
        }
        return maxSum;
    }
*/