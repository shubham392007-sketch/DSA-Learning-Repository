// Maximum Sub array sum using brute force method
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements to add in array: ";
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element at position " << i << " :";
        cin >> array[i];
    }

    cout << "Your array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    int maximum_sum = INT8_MIN;
    for (int start = 0; start < n; start++)
    {
        int current_sum = 0;

        for (int end = start; end < n; end++)
        {
            current_sum += array[end];
            maximum_sum = max(current_sum, maximum_sum);
        }
    }

    cout << "The maximum sum of sub array is: " << maximum_sum;

    return 0;
}

/*
EXPLANATION OF THE CODE:

1. GOAL OF THE CODE:
    This program finds the Maximum Subarray Sum.
    Problem: Find a continuous subarray which has the largest sum.
    Example: arr = [1, -2, 3, 4, -5] -> Max sum is 7 from subarray [3,4].

2. WHAT IS BRUTE FORCE?
    - Brute Force means checking all possible subarrays and finding which has max sum.
    - You already learned how to print all subarrays using 3 loops (O(n^3)).
    - This code is an OPTIMIZED Brute Force using only 2 loops (O(n^2)).
    - This is better than 3 loops.

3. INITIALIZATION:
    int maximum_sum = INT8_MIN;
    - INT8_MIN is -128. It's the smallest value of 8-bit int.
    - You start maximum_sum with smallest possible value so that any sum will be larger.
    - BUG HERE: You should use INT_MIN (from #include <climits>), not INT8_MIN.
      Why? If your array has values like [100, 200], max sum 300 > -128 still works,
      but if array is [-500, -100], then -100 should be max, but INT8_MIN is -128.
      -100 > -128, so it works, but if values are -200, -300, max is -200, but -200 < -128,
      so maximum_sum will incorrectly stay -128.
      So correct is: int maximum_sum = INT_MIN; and #include <climits>

4. CORE LOGIC - 2 LOOPS (The Optimization):

    for (int start = 0; start < n; start++)
    {
        int current_sum = 0; // Reset to 0 for each new starting point

        for (int end = start; end < n; end++)
        {
            current_sum += array[end]; // Add next element to current sum
            maximum_sum = max(current_sum, maximum_sum); // Update max if needed
        }
    }

    - How is this better than 3 loops?
    - In previous code for printing subarrays, you needed 3rd loop to sum from start to end.
    - Here, you don't recalculate sum from scratch.
    - You keep a running sum: current_sum += array[end];
    - This avoids the 3rd loop.

5. DRY RUN for array = [1, -2, 3], n=3
    maximum_sum = -128

    start=0, current_sum=0
      end=0: current_sum = 0+1=1, maximum_sum = max(1,-128)=1
      end=1: current_sum = 1+(-2)=-1, maximum_sum = max(-1,1)=1
      end=2: current_sum = -1+3=2, maximum_sum = max(2,1)=2

    start=1, current_sum=0
      end=1: current_sum = 0+(-2)=-2, maximum_sum = max(-2,2)=2
      end=2: current_sum = -2+3=1, maximum_sum = max(1,2)=2

    start=2, current_sum=0
      end=2: current_sum = 0+3=3, maximum_sum = max(3,2)=3

    Final maximum_sum = 3 (from subarray [3] or [1,-2,3])

6. ANOTHER DRY RUN for array = [-2, 1, -3, 4, -1, 2, 1, -5, 4] -> Classic LeetCode example
    Max subarray is [4,-1,2,1] with sum 6.
    Your code will correctly find 6.

7. TIME COMPLEXITY:
    - Outer loop: n times
    - Inner loop: n, n-1, n-2... times
    - Total: O(n^2)
    - Better than O(n^3) but still not best.

8. WHAT IS THE BEST SOLUTION?
    - The best is KADANE'S ALGORITHM - O(n) time.
    - It is the next topic you should learn after this.
    - Kadane's logic: If current_sum becomes negative, reset to 0.

9. FIXES FOR YOUR CODE:
    Add #include <climits>
    Change INT8_MIN to INT_MIN
    And for best practice, use vector<int> array(n); instead of int array[n];

*/