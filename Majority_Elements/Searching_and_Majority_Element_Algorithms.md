# Majority Element in C++ – Brute Force, Better Approach, Two Pointer Approach & Moore's Voting Algorithm (Complete Guide)

> A comprehensive guide covering Majority Element, Brute Force Approach, Hashing Approach, Sorting & Two Pointer Concepts, Moore's Voting Algorithm, Dry Run, Time Complexity, Edge Cases, Applications, and Interview Questions.

---

# Table of Contents

1. Introduction
2. What is a Majority Element?
3. Problem Statement
4. Examples
5. Brute Force Approach
6. Better Approach (Hashing)
7. Sorting Approach
8. Two Pointer Approach
9. Moore's Voting Algorithm
10. Why Moore's Algorithm Works
11. Dry Run
12. Implementation
13. Verification Step
14. Complexity Analysis
15. Applications
16. Common Mistakes
17. Interview Questions
18. Summary

---

# 1. Introduction

One of the most common interview questions on arrays is the **Majority Element Problem**.

The challenge is to determine whether there exists an element that appears **more than half of the size of the array**.

Example

```
Array

2 2 1 1 2 2 2
```

Majority Element

```
2
```

because

```
Frequency = 5

Array Size = 7

5 > 7/2
```

---

# 2. What is a Majority Element?

A **majority element** is an element whose frequency is **strictly greater than n/2**, where **n** is the size of the array.

Mathematically,

```
Frequency(element)

>

n/2
```

Important:

- There can be **only one** majority element in an array.
- It is also possible that **no majority element exists**.

---

# 3. Problem Statement

Given an integer array,

Return

- the majority element if it exists.
- otherwise return **-1**.

---

# 4. Examples

### Example 1

```
Input

2 2 1 1 2 2 2
```

Output

```
2
```

---

### Example 2

```
Input

3 3 4
```

Output

```
3
```

---

### Example 3

```
Input

1 2 3 4
```

Output

```
-1
```

No majority element exists.

---

# 5. Brute Force Approach

The simplest approach is to count the occurrences of every element by comparing it with every other element.

## Algorithm

1. Select one element.
2. Count its occurrences.
3. If the count is greater than `n/2`, return it.
4. Otherwise repeat for every element.

---

## Implementation

```cpp
#include <iostream>
using namespace std;

int majorityElement(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        int count = 0;

        for(int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        if(count > n / 2)
        {
            return arr[i];
        }
    }

    return -1;
}

int main()
{
    int arr[] = {2,2,1,1,2,2,2};

    int n = sizeof(arr)/sizeof(arr[0]);

    cout << majorityElement(arr,n);
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
O(1)
```

---

# 6. Better Approach (Hashing)

Instead of repeatedly counting, store frequencies in a hash table.

The C++ STL container `unordered_map` provides average **O(1)** insertion and lookup.

## Algorithm

1. Traverse the array once.
2. Store the frequency of each element.
3. Traverse the map.
4. Return the element whose frequency is greater than `n/2`.

---

## Implementation

```cpp
#include <iostream>
#include <unordered_map>
using namespace std;

int majorityElement(int arr[], int n)
{
    unordered_map<int,int> freq;

    for(int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    for(auto x : freq)
    {
        if(x.second > n/2)
        {
            return x.first;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {2,2,1,1,2,2,2};

    int n = sizeof(arr)/sizeof(arr[0]);

    cout << majorityElement(arr,n);
}
```

---

## Complexity

Time

```
O(n)
```

Average case.

Space

```
O(n)
```

---

# 7. Sorting Approach

Sort the array.

If a majority element exists, it must occupy the middle position after sorting.

Example

```
Original

2 1 2 2 3 2 2
```

Sorted

```
1 2 2 2 2 2 3
```

Middle element

```
2
```

However, the candidate must still be verified by counting its occurrences.

---

## Implementation

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int majorityElement(int arr[], int n)
{
    sort(arr, arr + n);

    int candidate = arr[n/2];

    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == candidate)
        {
            count++;
        }
    }

    if(count > n/2)
        return candidate;

    return -1;
}
```

---

## Complexity

Time

```
O(n log n)
```

Space

```
O(1)
```

(ignoring the implementation details of `sort()`)

---

# 8. Two Pointer Approach

## Can the Two Pointer Approach Solve the Majority Element Problem?

**No, not directly.**

Unlike problems such as:

- Pair Sum
- Remove Duplicates
- Reverse Array
- Container With Most Water

the Majority Element Problem has **no natural left-right relationship**.

Two pointers cannot efficiently determine the frequency of arbitrary values in an unsorted array.

---

## When Can Two Pointers Be Used?

After sorting the array.

```
Original

2 1 2 2 3 2 2

↓

Sorted

1 2 2 2 2 2 3
```

We can use two pointers to count consecutive equal elements.

Algorithm

1. Sort the array.
2. Set `left = 0`.
3. Move `right` while elements are equal.
4. Count frequency.
5. If frequency > `n/2`, return the element.
6. Move `left = right` and continue.

---

## Implementation

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int majorityElement(int arr[], int n)
{
    sort(arr, arr + n);

    int left = 0;

    while(left < n)
    {
        int right = left;

        while(right < n && arr[right] == arr[left])
        {
            right++;
        }

        if(right - left > n / 2)
        {
            return arr[left];
        }

        left = right;
    }

    return -1;
}
```

---

## Complexity

Sorting

```
O(n log n)
```

Scanning

```
O(n)
```

Overall

```
O(n log n)
```

---

# 9. Moore's Voting Algorithm

Moore's Voting Algorithm is the **optimal solution**.

It works in

```
O(n)
```

time and

```
O(1)
```

extra space.

---

## Idea

Whenever two different elements are encountered,

they cancel each other.

Only the majority element can survive this cancellation process.

---

## Algorithm

Maintain

```
candidate

count
```

Initially

```
count = 0
```

For every element

```
If count == 0

candidate = current element

count++

Else if current element == candidate

count++

Else

count--
```

After one traversal,

`candidate` is a **potential majority element**.

It must be verified.

---

# 10. Why Moore's Algorithm Works

Imagine repeatedly removing one occurrence of the majority element together with one occurrence of any other element.

Since the majority element appears more than `n/2` times,

it can never be completely eliminated.

Eventually,

it is the only possible candidate left.

---

# 11. Dry Run

Example

```
2 2 1 1 2 2 2
```

| Element | Candidate | Count |
|----------|-----------|------|
|2|2|1|
|2|2|2|
|1|2|1|
|1|2|0|
|2|2|1|
|2|2|2|
|2|2|3|

Candidate

```
2
```

Verification confirms

```
Frequency = 5
```

Majority element

```
2
```

---

# 12. Moore's Voting Algorithm Implementation

```cpp
#include <iostream>
using namespace std;

int majorityElement(int arr[], int n)
{
    int candidate = -1;
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(count == 0)
        {
            candidate = arr[i];
            count = 1;
        }
        else if(arr[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    return candidate;
}

int main()
{
    int arr[] = {2,2,1,1,2,2,2};

    int n = sizeof(arr)/sizeof(arr[0]);

    cout << majorityElement(arr,n);
}
```

---

# 13. Verification Step

Moore's algorithm only returns a **candidate**.

Always verify it.

```cpp
int verify(int arr[], int n, int candidate)
{
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == candidate)
        {
            count++;
        }
    }

    if(count > n/2)
        return candidate;

    return -1;
}
```

Complete solution

```cpp
int candidate = majorityElement(arr,n);

cout << verify(arr,n,candidate);
```

---

# 14. Complexity Analysis

| Approach | Time | Space |
|-----------|------|-------|
| Brute Force | O(n²) | O(1) |
| Hashing | O(n) | O(n) |
| Sorting | O(n log n) | O(1) |
| Sorting + Two Pointer | O(n log n) | O(1) |
| Moore's Voting Algorithm | O(n) | O(1) |

**Moore's Voting Algorithm** is the most efficient solution when searching for a majority element (> n/2).

---

# 15. Applications

Majority element algorithms are used in:

- Competitive Programming
- Data Analysis
- Voting Systems
- Stream Processing
- Distributed Computing
- Fault-Tolerant Systems
- Machine Learning
- Pattern Recognition

---

# 16. Common Mistakes

### Forgetting Verification

Moore's algorithm alone does **not** guarantee that a majority element exists.

Always verify the candidate.

---

### Using `>= n/2`

Incorrect

```cpp
count >= n/2
```

Correct

```cpp
count > n/2
```

A majority element must appear **strictly more than half** the size of the array.

---

### Assuming Two Pointers Solve the Problem Directly

Two pointers are **not** an optimal standalone approach for the majority element problem.

They become useful only after sorting.

---

### Ignoring Empty Arrays

Always check whether the array size is zero before processing.

---

# 17. Interview Questions

### Q1. What is a majority element?

An element that appears **more than n/2 times**.

---

### Q2. Can there be two majority elements (> n/2)?

No.

At most one element can satisfy this condition.

---

### Q3. What is the brute force complexity?

```
O(n²)
```

---

### Q4. Which STL container is commonly used for hashing?

```cpp
unordered_map
```

---

### Q5. Why is hashing faster than brute force?

It stores frequencies while traversing the array only once, avoiding repeated counting.

---

### Q6. Can the two pointer approach directly solve the majority element problem?

No.

It only becomes useful after sorting the array.

---

### Q7. What is Moore's Voting Algorithm?

An algorithm that finds a **candidate** for the majority element in **O(n)** time using **O(1)** extra space.

---

### Q8. Why does Moore's algorithm work?

Because pairs of different elements cancel each other, leaving only the majority candidate.

---

### Q9. Why is verification required after Moore's algorithm?

The algorithm guarantees only a **candidate**. If no majority element exists, the candidate may not actually satisfy the required frequency.

---

### Q10. Which approach is the most efficient?

**Moore's Voting Algorithm** with a verification pass.

- Time: `O(n)`
- Space: `O(1)`

---

# 18. Summary

- A **majority element** is an element whose frequency is **strictly greater than `n/2`**.
- The **brute force approach** counts occurrences of every element individually and runs in **O(n²)** time.
- The **hashing approach** uses `unordered_map` to count frequencies in **O(n)** average time with **O(n)** extra space.
- The **sorting approach** places the majority element at the middle index (if one exists), but still requires verification.
- A **two pointer approach** is **not** an optimal standalone solution for the majority element problem; it is only useful after sorting to count consecutive equal elements.
- **Moore's Voting Algorithm** is the optimal solution, requiring **O(n)** time and **O(1)** extra space.
- Moore's algorithm works by repeatedly canceling pairs of different elements, leaving the majority element as the final candidate.
- **Verification is mandatory** after Moore's algorithm because the candidate may not actually be a majority element if no such element exists.
- Understanding these approaches is essential for coding interviews, competitive programming, and algorithm design.

---