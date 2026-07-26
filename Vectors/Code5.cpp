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

/*
EXPLANATION OF THE CODE:

1. GOAL OF THE CODE - LeetCode 136. Single Number:
    Problem Statement: In an array, every element appears twice except for one element which appears only once.
    Find that single unique element.
    Example: [2,1,1,2,4] -> 4 is unique because 2 and 1 appear twice.
    Requirement: Solve in O(n) time and O(1) space.

2. THE TRICK USED: XOR OPERATOR (^)
    This code uses Bitwise XOR (^) which is the smartest way to solve this problem.

    Properties of XOR you MUST know:
    a) a ^ a = 0      -> Any number XORed with itself is 0.
       Example: 2 ^ 2 = 0, 1 ^ 1 = 0

    b) a ^ 0 = a      -> Any number XORed with 0 remains same.
       Example: 5 ^ 0 = 5

    c) XOR is Commutative and Associative:
       a ^ b = b ^ a
       a ^ b ^ c = (a ^ b) ^ c = a ^ (b ^ c)
       Means order doesn't matter.

3. WHY XOR WORKS FOR THIS PROBLEM?
    Because duplicates will cancel each other to 0, and only unique will remain with 0.
    Formula: ans ^ duplicate ^ duplicate = ans ^ 0 = ans

4. DRY RUN for vec = {2, 1, 1, 2, 4}
    Initial: ans = 0

    val=2: ans = 0 ^ 2 = 2
    val=1: ans = 2 ^ 1 = 3 (binary: 10 ^ 01 = 11 = 3)
    val=1: ans = 3 ^ 1 = 2 (binary: 11 ^ 01 = 10 = 2) -> 1 canceled
    val=2: ans = 2 ^ 2 = 0 -> 2 canceled
    val=4: ans = 0 ^ 4 = 4 -> Only unique remains

    Final ans = 4. Unique value is 4.

    Let's reorder to understand better (since XOR order doesn't matter):
    vec = {2,1,1,2,4} = 2^1^1^2^4
        = (2^2) ^ (1^1) ^ 4
        = 0 ^ 0 ^ 4
        = 4

5. LINE-BY-LINE EXPLANATION:
    int ans = 0; -> Start with 0 because 0 is identity for XOR (a ^ 0 = a)
    vector<int> vec = {2,1,1,2,4}; -> Input array.

    for (int val : vec) -> Range-based for loop, takes each value one by one.
    {
        ans = ans ^ val; -> XOR ans with current value and store back.
    }

6. TIME & SPACE COMPLEXITY:
    - Time: O(n) -> Single loop over n elements. Best possible.
    - Space: O(1) -> Only one variable ans used, no extra array. Best possible.

7. WHY NOT USE OTHER METHODS?
    - Brute Force (Nested loops): O(n^2) -> Too slow.
    - Hash Map / Frequency Count: O(n) time but O(n) space -> Extra memory needed.
    - Sorting first then checking: O(n log n) -> Slower than O(n).
    - XOR method is optimal.

8. IMPORTANT FOR INTERVIEW / LEETCODE:
    - LeetCode Question Number: 136. Single Number
    - This is the expected answer in interviews.
    - Edge Case: This trick only works when every other element appears EXACTLY TWICE.
      If elements appear 3 times, XOR won't work, you need different logic.

    Final Output: The unique value is: 4
*/