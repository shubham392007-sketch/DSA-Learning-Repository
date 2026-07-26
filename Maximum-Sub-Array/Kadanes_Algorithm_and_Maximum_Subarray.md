# Kadane's Algorithm, Subarray, Maximum Subarray & Brute Force Approach in C++ – Complete Guide

> A comprehensive guide covering Subarrays, Maximum Subarray Sum, Brute Force Solution, Better Approach using Prefix Sum, Kadane's Algorithm, Dry Run, Proof of Correctness, Edge Cases, Complexity Analysis, Applications, and Interview Questions.

---

# Table of Contents

1. Introduction
2. What is a Subarray?
3. Array vs Subarray vs Subsequence
4. Number of Subarrays
5. Types of Subarrays
6. Maximum Subarray Problem
7. Problem Statement
8. Brute Force Approach
9. Better Approach (Prefix Sum)
10. Kadane's Algorithm
11. Intuition Behind Kadane's Algorithm
12. Working of Kadane's Algorithm
13. Dry Run
14. Kadane's Algorithm Implementation
15. Handling All Negative Numbers
16. Printing the Maximum Subarray
17. Time Complexity Analysis
18. Applications
19. Common Mistakes
20. Interview Questions
21. Summary

---

# 1. Introduction

One of the most frequently asked problems in coding interviews and competitive programming is the **Maximum Subarray Sum Problem**.

Given an array of integers, we need to find the **contiguous subarray** whose sum is maximum.

Example

```
Array

2 -3 4 -1 -2 1 5 -3
```

Maximum Subarray

```
4 -1 -2 1 5
```

Maximum Sum

```
7
```

The most efficient solution is **Kadane's Algorithm**, which solves the problem in **O(n)** time.

---

# 2. What is a Subarray?

A **subarray** is a **continuous (contiguous)** part of an array.

Example

```
Array

1 2 3 4
```

Valid Subarrays

```
1

2

3

4

1 2

2 3

3 4

1 2 3

2 3 4

1 2 3 4
```

Invalid

```
1 3

2 4

1 4
```

because elements are **not contiguous**.

---

# 3. Array vs Subarray vs Subsequence

| Feature | Array | Subarray | Subsequence |
|----------|--------|-----------|-------------|
| Contiguous | Complete array | Yes | No |
| Order Preserved | Yes | Yes | Yes |
| Can Skip Elements | No | No | Yes |
| Example | `1 2 3 4` | `2 3` | `1 3 4` |

---

# 4. Number of Subarrays

For an array of size **n**,

```
Total Subarrays

=

n × (n + 1)

──────────────

      2
```

Example

```
n = 5

Total

=

5 × 6

──────

  2

=

15
```

---

# 5. Types of Subarrays

## Single Element

```
5
```

---

## Complete Array

```
1 2 3 4 5
```

---

## Middle Portion

```
2 3 4
```

---

## Prefix Subarray

Starts from index `0`.

```
1 2 3
```

---

## Suffix Subarray

Ends at the last index.

```
3 4 5
```

---

# 6. Maximum Subarray Problem

Find the contiguous subarray whose sum is maximum.

Example

```
Array

-2 1 -3 4 -1 2 1 -5 4
```

Answer

```
4 -1 2 1
```

Maximum Sum

```
6
```

---

# 7. Problem Statement

Given an integer array,

Return

```
Maximum Sum
```

of any contiguous subarray.

---

# 8. Brute Force Approach

The simplest solution is to generate **every possible subarray**, calculate its sum, and keep the maximum.

## Algorithm

1. Select the starting index.
2. Select the ending index.
3. Compute the sum of all elements between them.
4. Update the maximum.
5. Repeat for all subarrays.

---

## Implementation

```cpp
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {2, -3, 4, -1, -2, 1, 5, -3};

    int n = sizeof(arr) / sizeof(arr[0]);

    int maximum = INT_MIN;

    for(int start = 0; start < n; start++)
    {
        for(int end = start; end < n; end++)
        {
            int sum = 0;

            for(int k = start; k <= end; k++)
            {
                sum += arr[k];
            }

            maximum = max(maximum, sum);
        }
    }

    cout << maximum;
}
```

Output

```
7
```

---

## Complexity

Time

```
O(n³)
```

Space

```
O(1)
```

---

# 9. Better Approach (Prefix Sum)

Instead of calculating every subarray sum repeatedly, precompute prefix sums.

## Prefix Sum

```
prefix[i]

=

sum of elements from index 0 to i
```

Example

```
Array

1 2 3 4

Prefix

1 3 6 10
```

Now

```
Sum(L,R)

=

prefix[R]

-

prefix[L-1]
```

(when `L > 0`)

---

## Implementation

```cpp
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {2, -3, 4, -1, -2, 1, 5, -3};

    int n = sizeof(arr) / sizeof(arr[0]);

    int prefix[n];

    prefix[0] = arr[0];

    for(int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    int maximum = INT_MIN;

    for(int start = 0; start < n; start++)
    {
        for(int end = start; end < n; end++)
        {
            int sum;

            if(start == 0)
                sum = prefix[end];
            else
                sum = prefix[end] - prefix[start - 1];

            maximum = max(maximum, sum);
        }
    }

    cout << maximum;
}
```

---

## Complexity

Time

```
O(n²)
```

Space

```
O(n)
```

---

# 10. Kadane's Algorithm

Kadane's Algorithm solves the Maximum Subarray Problem in **linear time**.

Instead of checking every subarray, it decides at each element:

- Continue the current subarray, or
- Start a new subarray.

---

# 11. Intuition Behind Kadane's Algorithm

Suppose the running sum becomes negative.

Example

```
Current Sum

-12
```

Adding it to future elements only reduces future sums.

Therefore,

**Discard the negative sum and start from the next element.**

This simple observation leads to an optimal `O(n)` solution.

---

# 12. Working of Kadane's Algorithm

Maintain two variables.

```
currentSum

maximumSum
```

For every element

```
currentSum += arr[i]

maximumSum = max(maximumSum, currentSum)

If currentSum < 0

currentSum = 0
```

---

# Algorithm Steps

1. Start with `currentSum = 0`.
2. Initialize `maximumSum` to the smallest integer.
3. Traverse the array once.
4. Add the current element to `currentSum`.
5. Update `maximumSum`.
6. If `currentSum` becomes negative, reset it to `0`.
7. Continue until the end.

---

# 13. Dry Run

Example

```
Array

2 -3 4 -1 -2 1 5 -3
```

| Element | Current Sum | Maximum Sum |
|----------|-------------|-------------|
|2|2|2|
|-3|-1 → 0|2|
|4|4|4|
|-1|3|4|
|-2|1|4|
|1|2|4|
|5|7|7|
|-3|4|7|

Answer

```
7
```

---

# 14. Kadane's Algorithm Implementation

```cpp
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {2, -3, 4, -1, -2, 1, 5, -3};

    int n = sizeof(arr) / sizeof(arr[0]);

    int currentSum = 0;

    int maximumSum = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        currentSum += arr[i];

        maximumSum = max(maximumSum, currentSum);

        if(currentSum < 0)
        {
            currentSum = 0;
        }
    }

    cout << maximumSum;
}
```

Output

```
7
```

---

# 15. Handling All Negative Numbers

The common implementation works correctly **only because `maximumSum` is updated before resetting `currentSum`**.

Example

```
Array

-5 -2 -8
```

Maximum Subarray

```
-2
```

Maximum Sum

```
-2
```

Using `INT_MIN` ensures that the algorithm correctly returns the largest (least negative) value.

---

# 16. Printing the Maximum Subarray

To print the actual subarray, track its starting and ending indices.

```cpp
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {2, -3, 4, -1, -2, 1, 5, -3};

    int n = sizeof(arr) / sizeof(arr[0]);

    int currentSum = 0;
    int maximumSum = INT_MIN;

    int start = 0;
    int end = 0;
    int tempStart = 0;

    for(int i = 0; i < n; i++)
    {
        currentSum += arr[i];

        if(currentSum > maximumSum)
        {
            maximumSum = currentSum;
            start = tempStart;
            end = i;
        }

        if(currentSum < 0)
        {
            currentSum = 0;
            tempStart = i + 1;
        }
    }

    cout << "Maximum Sum = " << maximumSum << endl;

    cout << "Subarray : ";

    for(int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
}
```

Output

```
Maximum Sum = 7

Subarray

4 -1 -2 1 5
```

---

# 17. Time Complexity Analysis

| Approach | Time Complexity | Space Complexity |
|-----------|-----------------|------------------|
| Brute Force | O(n³) | O(1) |
| Prefix Sum | O(n²) | O(n) |
| Kadane's Algorithm | O(n) | O(1) |

Kadane's Algorithm is the optimal solution for this problem.

---

# 18. Applications

Kadane's Algorithm is used in:

- Competitive Programming
- Dynamic Programming
- Financial Analysis (maximum profit intervals)
- Stock Price Analysis
- Signal Processing
- Image Processing
- Machine Learning feature analysis
- Bioinformatics
- Game Development
- Data Analytics

---

# 19. Common Mistakes

### Confusing Subarray with Subsequence

Subarrays must be contiguous.

---

### Resetting Before Updating Maximum

Incorrect

```cpp
if(currentSum < 0)
    currentSum = 0;

maximumSum = max(maximumSum, currentSum);
```

This fails for arrays containing only negative numbers.

Correct

```cpp
maximumSum = max(maximumSum, currentSum);

if(currentSum < 0)
    currentSum = 0;
```

---

### Initializing `maximumSum` to `0`

Incorrect

```cpp
int maximumSum = 0;
```

Fails when all elements are negative.

Correct

```cpp
int maximumSum = INT_MIN;
```

---

### Forgetting `<climits>`

`INT_MIN` is defined in

```cpp
#include <climits>
```

---

# 20. Interview Questions

### Q1. What is a subarray?

A contiguous sequence of elements from an array.

---

### Q2. What is the formula for the number of subarrays?

```
n × (n + 1) / 2
```

---

### Q3. What is the Maximum Subarray Problem?

Finding the contiguous subarray with the largest possible sum.

---

### Q4. What is the time complexity of the brute force approach?

```
O(n³)
```

---

### Q5. How can the brute force approach be improved?

Use a Prefix Sum array to reduce the complexity to `O(n²)`.

---

### Q6. What is Kadane's Algorithm?

A linear-time algorithm that finds the maximum subarray sum by maintaining a running sum and discarding negative prefixes.

---

### Q7. Why does Kadane's Algorithm reset the running sum to zero?

A negative running sum can only decrease the sum of any future subarray, so it is better to start a new subarray.

---

### Q8. What is the time complexity of Kadane's Algorithm?

```
O(n)
```

---

### Q9. What is the space complexity of Kadane's Algorithm?

```
O(1)
```

---

### Q10. Can Kadane's Algorithm print the maximum subarray?

Yes. By tracking the starting and ending indices during traversal.

---

# 21. Summary

- A **subarray** is a contiguous portion of an array, unlike a subsequence, which may skip elements.
- An array of size `n` contains **n × (n + 1) / 2** possible subarrays.
- The **Maximum Subarray Problem** asks for the contiguous subarray with the largest sum.
- The **brute force approach** checks every possible subarray and has a time complexity of **O(n³)**.
- Using **prefix sums** reduces the complexity to **O(n²)** by avoiding repeated summation.
- **Kadane's Algorithm** provides the optimal solution with **O(n)** time and **O(1)** extra space.
- The key idea behind Kadane's Algorithm is to discard any running sum that becomes negative, since it cannot improve future results.
- Initializing the maximum sum with `INT_MIN` ensures correct handling of arrays containing only negative numbers.
- Kadane's Algorithm can be extended to return not only the maximum sum but also the actual subarray.
- This algorithm is one of the most important dynamic programming concepts and is frequently asked in coding interviews and competitive programming.

---