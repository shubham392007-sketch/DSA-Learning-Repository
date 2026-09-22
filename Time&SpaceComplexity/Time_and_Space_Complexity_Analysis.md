# Time Complexity and Space Complexity in C++ – Complete Guide

> A comprehensive guide covering Algorithm Analysis, Time Complexity, Space Complexity, Asymptotic Notations, Best Case, Worst Case, Average Case, Amortized Analysis, Auxiliary Space, Common Complexities, Growth Rate Comparison, Examples, Interview Questions, and Best Practices.

---

# Table of Contents

1. Introduction
2. Why Complexity Analysis is Important
3. What is an Algorithm?
4. What is Time Complexity?
5. What is Space Complexity?
6. Types of Time Complexity
7. Types of Space Complexity
8. Asymptotic Notations
9. Common Time Complexities
10. Common Space Complexities
11. Growth Rate Comparison
12. Complexity of Loops
13. Complexity of Nested Loops
14. Complexity of Recursion
15. Complexity of Common Operations
16. Complexity of STL Containers
17. Complexity of Searching Algorithms
18. Complexity of Sorting Algorithms
19. Time vs Space Trade-off
20. Common Mistakes
21. Interview Questions
22. Summary

---

# 1. Introduction

Whenever we write a program, two important questions arise:

- How fast does the algorithm run?
- How much memory does the algorithm use?

These are measured using:

- **Time Complexity**
- **Space Complexity**

Complexity analysis helps compare algorithms independently of the programming language, compiler, or hardware.

---

# 2. Why Complexity Analysis is Important

Suppose two algorithms solve the same problem.

Algorithm A

```
Time = 2 milliseconds
```

Algorithm B

```
Time = 20 milliseconds
```

On a larger input, Algorithm B might become much slower.

Complexity analysis predicts how algorithms scale as the input size grows.

It helps us:

- Compare algorithms
- Optimize performance
- Reduce execution time
- Reduce memory usage
- Select the best algorithm

---

# 3. What is an Algorithm?

An **algorithm** is a step-by-step procedure to solve a problem.

Example

Finding the maximum element:

1. Start from the first element.
2. Compare with the next element.
3. Keep the larger value.
4. Repeat until the end.

---

# 4. What is Time Complexity?

**Time Complexity** measures how the running time of an algorithm changes as the input size (`n`) increases.

It **does not measure actual time in seconds**.

Instead, it counts the number of fundamental operations performed.

Example

```cpp
for(int i = 0; i < n; i++)
{
    cout << arr[i];
}
```

The loop executes `n` times.

Time Complexity

```
O(n)
```

---

# 5. What is Space Complexity?

**Space Complexity** measures the amount of memory required by an algorithm as the input size grows.

It includes:

- Input space
- Auxiliary (extra) space

Example

```cpp
int arr[100];
```

Space

```
O(n)
```

---

# 6. Types of Time Complexity

Time complexity is commonly analyzed in different cases.

## Best Case

The minimum time required.

Example

Linear Search

```
Target found at first index.
```

```
O(1)
```

---

## Worst Case

The maximum time required.

Example

Linear Search

```
Target found at last index.
```

or

```
Target not present.
```

```
O(n)
```

---

## Average Case

Expected running time over all possible inputs.

Example

Linear Search

```
O(n)
```

(on average, about half the elements are examined.)

---

## Amortized Time Complexity

Measures the average cost of an operation over a sequence of operations.

Example

```cpp
vector.push_back()
```

Normally

```
O(1)
```

During reallocation

```
O(n)
```

Overall (amortized)

```
O(1)
```

---

# 7. Types of Space Complexity

## Input Space

Memory used to store the input.

Example

```cpp
int arr[100];
```

Input Space

```
O(n)
```

---

## Auxiliary Space

Extra memory used by the algorithm excluding the input.

Example

```cpp
int sum = 0;
```

Auxiliary Space

```
O(1)
```

---

Example

```cpp
int temp[n];
```

Auxiliary Space

```
O(n)
```

---

## Total Space Complexity

```
Total Space

=

Input Space

+

Auxiliary Space
```

---

# 8. Asymptotic Notations

Asymptotic notations describe the growth of an algorithm.

---

## Big O Notation – O()

Represents the **upper bound**.

Shows the maximum growth.

Example

```
Linear Search

O(n)
```

---

## Omega Notation – Ω()

Represents the **lower bound**.

Shows the minimum growth.

Example

```
Linear Search

Ω(1)
```

---

## Theta Notation – Θ()

Represents the **tight bound**.

Shows the exact order of growth.

Example

```
Merge Sort

Θ(n log n)
```

---

## Little o Notation – o()

Represents a **strict upper bound**.

Example

```
n

is

o(n²)
```

because `n` grows strictly slower than `n²`.

---

## Little Omega – ω()

Represents a **strict lower bound**.

Example

```
n²

is

ω(n)
```

because `n²` grows strictly faster than `n`.

---

# 9. Common Time Complexities

## O(1) – Constant Time

Execution time does not depend on input size.

Example

```cpp
cout << arr[5];
```

Examples

- Array indexing
- Stack `top()`
- Queue `front()`
- Variable assignment

---

## O(log n) – Logarithmic Time

Input size is repeatedly divided.

Example

Binary Search

```
1024

↓

512

↓

256

↓

128

↓

64

↓

32

↓

16

↓

8

↓

4

↓

2

↓

1
```

Examples

- Binary Search
- Balanced BST operations

---

## O(√n) – Square Root Time

Common in factorization and primality checks.

Example

Checking divisors up to `√n`.

---

## O(n) – Linear Time

One complete traversal.

Example

```cpp
for(int i = 0; i < n; i++)
{
}
```

Examples

- Linear Search
- Array Traversal

---

## O(n log n)

Common in efficient sorting algorithms.

Examples

- Merge Sort
- Heap Sort
- Average-case Quick Sort
- STL `sort()` (Introsort)

---

## O(n²)

Two nested loops.

```cpp
for(...)
{
    for(...)
    {

    }
}
```

Examples

- Bubble Sort
- Selection Sort
- Insertion Sort (Worst Case)

---

## O(n³)

Three nested loops.

Example

Matrix Multiplication (naive)

---

## O(2ⁿ)

Every element has two choices.

Examples

- Subset Generation
- Backtracking
- Recursive Fibonacci (naive)

---

## O(n!)

Very slow.

Example

Generating all permutations.

---

# 10. Common Space Complexities

## O(1)

Constant extra memory.

Example

```cpp
int sum = 0;
```

---

## O(log n)

Recursion stack for balanced recursive algorithms.

Example

Binary Search (recursive)

---

## O(n)

Extra array or recursion depth.

Example

```cpp
int temp[n];
```

---

## O(n²)

2D matrix.

Example

```cpp
int matrix[n][n];
```

---

# 11. Growth Rate Comparison

Fastest to Slowest

```
O(1)

↓

O(log n)

↓

O(√n)

↓

O(n)

↓

O(n log n)

↓

O(n²)

↓

O(n³)

↓

O(2ⁿ)

↓

O(n!)
```

| Complexity | Performance |
|------------|-------------|
| O(1) | Excellent |
| O(log n) | Excellent |
| O(√n) | Very Good |
| O(n) | Good |
| O(n log n) | Efficient |
| O(n²) | Acceptable for small inputs |
| O(n³) | Slow |
| O(2ⁿ) | Very Slow |
| O(n!) | Impractical for large inputs |

---

# 12. Complexity of Loops

## Single Loop

```cpp
for(int i = 0; i < n; i++)
{
}
```

Time

```
O(n)
```

---

## Two Independent Loops

```cpp
for(...)
{
}

for(...)
{
}
```

Time

```
O(n + n)

=

O(n)
```

---

## Nested Loops

```cpp
for(...)
{
    for(...)
    {

    }
}
```

Time

```
O(n²)
```

---

## Logarithmic Loop

```cpp
for(int i = 1; i < n; i *= 2)
{
}
```

Time

```
O(log n)
```

---

## Halving Loop

```cpp
while(n > 1)
{
    n /= 2;
}
```

Time

```
O(log n)
```

---

# 13. Complexity of Nested Loops

```cpp
for(int i = 0; i < n; i++)
{
    for(int j = 0; j < n; j++)
    {

    }
}
```

Operations

```
n × n

=

n²
```

Time

```
O(n²)
```

---

Different loop bounds

```cpp
for(int i = 0; i < n; i++)
{
    for(int j = 0; j < m; j++)
    {

    }
}
```

Time

```
O(n × m)
```

---

Triangular Loop

```cpp
for(int i = 0; i < n; i++)
{
    for(int j = i; j < n; j++)
    {

    }
}
```

Operations

```
n(n+1)/2
```

Time

```
O(n²)
```

---

# 14. Complexity of Recursion

## Linear Recursion

```cpp
fun(n)
{
    fun(n-1);
}
```

Time

```
O(n)
```

Stack Space

```
O(n)
```

---

## Binary Recursion

```cpp
fun(n)
{
    fun(n-1);
    fun(n-1);
}
```

Time

```
O(2ⁿ)
```

---

## Recursive Binary Search

Time

```
O(log n)
```

Stack

```
O(log n)
```

---

# 15. Complexity of Common Operations

## Arrays

| Operation | Time |
|-----------|------|
| Access | O(1) |
| Update | O(1) |
| Search | O(n) |
| Insert at End (if space available) | O(1) |
| Insert at Beginning | O(n) |
| Delete from Beginning | O(n) |
| Reverse | O(n) |

---

## Vectors

| Operation | Time |
|-----------|------|
| Access | O(1) |
| push_back() | O(1) amortized |
| pop_back() | O(1) |
| Insert Middle | O(n) |
| Erase Middle | O(n) |

---

## Stack

| Operation | Time |
|-----------|------|
| push | O(1) |
| pop | O(1) |
| top | O(1) |

---

## Queue

| Operation | Time |
|-----------|------|
| push | O(1) |
| pop | O(1) |
| front | O(1) |

---

# 16. Complexity of STL Containers

| Container | Access | Search | Insert | Delete |
|-----------|--------|--------|--------|--------|
| vector | O(1) | O(n) | O(1) at end (amortized) | O(n) |
| deque | O(1) | O(n) | O(1) at both ends | O(n) |
| list | O(n) | O(n) | O(1) | O(1) (given iterator) |
| set | O(log n) | O(log n) | O(log n) | O(log n) |
| map | O(log n) | O(log n) | O(log n) | O(log n) |
| unordered_set | Average O(1) | Average O(1) | Average O(1) | Average O(1) |
| unordered_map | Average O(1) | Average O(1) | Average O(1) | Average O(1) |
| priority_queue | O(1) top | — | O(log n) | O(log n) |

---

# 17. Complexity of Searching Algorithms

| Algorithm | Best | Average | Worst | Space |
|-----------|------|----------|--------|-------|
| Linear Search | O(1) | O(n) | O(n) | O(1) |
| Binary Search | O(1) | O(log n) | O(log n) | O(1) iterative / O(log n) recursive |

---

# 18. Complexity of Sorting Algorithms

| Algorithm | Best | Average | Worst | Space | Stable |
|-----------|------|----------|--------|-------|--------|
| Bubble Sort | O(n) | O(n²) | O(n²) | O(1) | Yes |
| Selection Sort | O(n²) | O(n²) | O(n²) | O(1) | No |
| Insertion Sort | O(n) | O(n²) | O(n²) | O(1) | Yes |
| Merge Sort | O(n log n) | O(n log n) | O(n log n) | O(n) | Yes |
| Quick Sort | O(n log n) | O(n log n) | O(n²) | O(log n) average recursion | No |
| Heap Sort | O(n log n) | O(n log n) | O(n log n) | O(1) | No |
| Counting Sort | O(n + k) | O(n + k) | O(n + k) | O(n + k) | Yes |
| Radix Sort | O(d × (n + k)) | O(d × (n + k)) | O(d × (n + k)) | O(n + k) | Yes |

Where:

- `n` = number of elements
- `k` = range of keys
- `d` = number of digits

---

# 19. Time vs Space Trade-off

Sometimes we use **more memory to reduce execution time**.

Example

Linear Search

```
Time

O(n)

Space

O(1)
```

Hash Table

```
Time

O(1) average lookup

Space

O(n)
```

Another example

- Merge Sort uses extra memory (`O(n)`) for faster predictable performance.
- Heap Sort uses constant extra memory (`O(1)`) but is generally less cache-friendly.

Choosing the right algorithm often depends on available memory and performance requirements.

---

# 20. Common Mistakes

### Assuming More Loops Always Mean O(n²)

Two consecutive loops

```cpp
for(...)
{
}

for(...)
{
}
```

are

```
O(n)
```

not `O(n²)`.

---

### Ignoring Hidden Costs

Operations such as `vector::push_back()` are amortized `O(1)` but can occasionally take `O(n)` due to reallocation.

---

### Confusing Time and Space

An algorithm can be:

- Fast but memory-intensive.
- Memory-efficient but slower.

These are independent measures.

---

### Ignoring Recursion Stack

Recursive functions consume stack memory even if no additional arrays are created.

---

### Treating Constants as Significant

```cpp
O(2n)

=

O(n)
```

Constant factors are ignored in asymptotic analysis.

---

# 21. Interview Questions

### Q1. What is Time Complexity?

It measures how the running time of an algorithm grows with the input size.

---

### Q2. What is Space Complexity?

It measures the memory required by an algorithm, including input and auxiliary space.

---

### Q3. What is Auxiliary Space?

Extra memory used by an algorithm excluding the input.

---

### Q4. What is the difference between Big O and Theta?

- **O()** gives an upper bound.
- **Θ()** gives a tight (exact asymptotic) bound.

---

### Q5. What is Amortized Complexity?

The average cost per operation over a sequence of operations, such as `vector::push_back()`.

---

### Q6. Which is faster: O(n) or O(log n)?

`O(log n)` grows much more slowly and is generally faster for large inputs.

---

### Q7. Which sorting algorithms have O(n log n) average complexity?

- Merge Sort
- Heap Sort
- Quick Sort (average case)
- Introsort (`std::sort()`)

---

### Q8. What is the time complexity of Binary Search?

- Best: `O(1)`
- Average: `O(log n)`
- Worst: `O(log n)`

---

### Q9. Why are constants ignored?

As input size becomes very large, the growth rate dominates constant factors.

---

### Q10. Which complexity is considered ideal?

- `O(1)` is the most efficient.
- `O(log n)` and `O(n)` are also considered highly efficient for most practical problems.

---

# 22. Summary

- **Time Complexity** measures how an algorithm's running time grows with input size, while **Space Complexity** measures its memory requirements.
- Time complexity is analyzed using **Best Case**, **Average Case**, **Worst Case**, and **Amortized Case**.
- Space complexity consists of **Input Space** and **Auxiliary Space**.
- **Asymptotic Notations** (`O`, `Ω`, `Θ`, `o`, `ω`) describe algorithm growth independent of hardware or programming language.
- The most common complexity classes are `O(1)`, `O(log n)`, `O(n)`, `O(n log n)`, `O(n²)`, `O(2ⁿ)`, and `O(n!)`.
- Consecutive loops usually add complexities (`O(n) + O(n) = O(n)`), while nested loops multiply them (`O(n × n) = O(n²)`).
- Recursive algorithms consume **stack space**, which contributes to space complexity.
- Different data structures and STL containers have different performance characteristics, making complexity analysis essential when choosing the right one.
- Good algorithm design balances **execution time** and **memory usage**, often making trade-offs depending on the problem.
- Understanding complexity analysis is fundamental for data structures, algorithms, competitive programming, software engineering interviews, and efficient system design.

---