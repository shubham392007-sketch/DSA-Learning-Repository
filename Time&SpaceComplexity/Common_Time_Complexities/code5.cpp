//O(log(n))
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    vector<int> data = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int target = 23;

    int result = binarySearch(data, target);

    if (result!= -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}

/*
EXPLANATION OF THE CODE:

1. GOAL OF THE CODE:
    To show O(log n) Logarithmic Time Complexity.
    Task: Binary Search - Search element in SORTED array efficiently.
    This is LeetCode 704. Binary Search.

2. WHAT IS O(log n)?
    - O(log n) means time grows very, very slowly.
    - Each step, you cut the problem into HALF.
    - Example: n=1024. Linear Search O(n) checks 1024 times worst case.
      Binary Search O(log n) checks only log2(1024)=10 times!
    - This is second best after O(1).

3. PRECONDITION FOR BINARY SEARCH:
    - Array MUST BE SORTED. Your data = {2,5,8,12,16,23,38,56,72,91} is sorted, so it works.
    - If array not sorted, binary search will fail.

4. CORE LOGIC - DIVIDE AND CONQUER:

    int low=0, high=arr.size()-1; -> Two pointers at start and end.

    while(low <= high) -> Till search space exists.

        int mid = low + (high-low)/2; -> Middle index.
        Note: Why not (low+high)/2? Because low+high can overflow for large values.
              low+(high-low)/2 prevents overflow. Very good practice!

        if(arr[mid]==target) return mid; -> Found!

        if(arr[mid] < target) -> Middle element smaller than target?
            low = mid+1; -> Means target is in RIGHT half. Discard left half.

        else
            high = mid-1; -> Middle larger than target? Target in LEFT half. Discard right half.

    return -1; -> Not found after loop ends.

5. DRY RUN: data={2,5,8,12,16,23,38,56,72,91}, target=23, n=10

    Start: low=0(2), high=9(91)
    Iter 1: mid=0+(9-0)/2=4. arr[4]=16. 16==23? No. 16<23? Yes -> low=mid+1=5. Now search space [5..9] -> {23,38,56,72,91}
    Iter 2: low=5, high=9. mid=5+(9-5)/2=7. arr[7]=56. 56==23? No. 56<23? No -> high=mid-1=6. Space [5..6] -> {23,38}
    Iter 3: low=5, high=6. mid=5+(6-5)/2=5. arr[5]=23. 23==23? YES -> return 5.

    Found at index 5 in just 3 steps! Linear search would take 6 steps.

6. WHY O(log n)?

    Each iteration, array size becomes half:
    n -> n/2 -> n/4 -> n/8 ->... -> 1
    How many times can you divide n by 2 till 1? log2(n) times.
    So O(log n).

    n=10 -> ~3-4 steps
    n=1000 -> ~10 steps
    n=1,000,000 -> ~20 steps only!
    That's why Binary Search is super fast.

7. TIME & SPACE COMPLEXITY:
    - Time: O(log n) -> Best for searching sorted array.
    - Space: O(1) -> Only low, high, mid variables. Iterative version.
    - Recursive version would be O(log n) space due to recursion stack.

8. COMPARISON OF ALL COMPLEXITIES YOU LEARNED:

    O(1) < O(log n) < O(n) < O(n log n) < O(n^2) < O(n^3)
    Best ---------------------------------------> Worst

    O(1): sum = n*(n+1)/2
    O(log n): Binary Search (This code)
    O(n): Factorial, Linear Search, Kadane's, Moore's Voting
    O(n log n): Sorting (Merge Sort), Majority with sorting
    O(n^2): Pair Sum Brute, Majority Brute O(n^2), 2D matrix
    O(n^3): Max Subarray with 3 loops

9. INTERVIEW TIPS:

    - Whenever you see "sorted array + search", think Binary Search O(log n).
    - Variations:
      - Lower Bound / Upper Bound
      - Search in Rotated Sorted Array (LeetCode 33)
      - Find First and Last Position (LeetCode 34)
    - Your code is perfect standard binary search for interviews.

10. SMALL IMPROVEMENTS:

    - Your main uses hard-coded data. You can take input from user.
    - Use: const vector<int>& arr -> You used reference to avoid copy, good! const to prevent modification, good!

*/