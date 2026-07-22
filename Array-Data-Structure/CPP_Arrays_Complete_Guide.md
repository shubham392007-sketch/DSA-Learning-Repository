# Arrays in C++ – Complete Guide

> A comprehensive guide covering Arrays, Array Data Structure, Array Syntax, Memory Representation, Traversing Arrays using Loops, Pass by Value, Pass by Reference, Linear Search, Array Reversal, Time Complexity, Common Algorithms, Best Practices, and Interview Questions.

---

# Table of Contents

1. Introduction to Arrays
2. Why Arrays are Needed
3. Array Data Structure
4. Characteristics of Arrays
5. Advantages of Arrays
6. Disadvantages of Arrays
7. Memory Representation
8. Array Declaration
9. Array Initialization
10. Types of Arrays
11. Accessing Array Elements
12. Array Indexing
13. Array Size
14. Input and Output of Arrays
15. Loops on Arrays
16. Traversing Arrays
17. Range-Based For Loop
18. Passing Arrays to Functions
19. Pass by Value vs Pass by Reference
20. Arrays in Memory
21. Linear Search
22. Array Reversing
23. Common Array Operations
24. Time Complexity
25. Common Mistakes
26. Best Practices
27. Interview Questions
28. Summary

---

# 1. Introduction to Arrays

An **array** is a collection of elements of the **same data type** stored in **contiguous memory locations**.

Instead of creating multiple variables, an array stores many values under a single name.

Without an array

```cpp
int marks1 = 85;
int marks2 = 90;
int marks3 = 78;
int marks4 = 88;
int marks5 = 95;
```

With an array

```cpp
int marks[5] = {85, 90, 78, 88, 95};
```

---

# 2. Why Arrays are Needed

Imagine storing marks of 1000 students.

Without arrays

```cpp
int m1;
int m2;
int m3;
...
int m1000;
```

Very difficult to manage.

With arrays

```cpp
int marks[1000];
```

Only one variable is needed.

Arrays make programs:

- Easier to write
- Easier to read
- Easier to maintain
- More memory efficient
- Suitable for algorithms

---

# 3. Array Data Structure

An array is one of the most fundamental data structures.

It stores:

- Same type of elements
- Fixed size
- Continuous memory

Visualization

```
Index

0     1     2     3     4

↓

+-----+-----+-----+-----+-----+

| 10  | 20  | 30  | 40  | 50  |

+-----+-----+-----+-----+-----+
```

---

# 4. Characteristics of Arrays

- Homogeneous elements
- Fixed size
- Stored contiguously
- Indexed from **0**
- Constant-time random access
- Easy traversal using loops

---

# 5. Advantages of Arrays

### Fast Access

```cpp
arr[50]
```

Time Complexity

```
O(1)
```

---

### Less Memory Overhead

No extra pointers or node structures.

---

### Cache Friendly

Contiguous memory improves CPU cache performance.

---

### Easy Traversal

Arrays work naturally with loops.

---

### Basis of Many Data Structures

Arrays are used to build:

- Stacks
- Queues
- Heaps
- Hash Tables
- Dynamic Arrays
- Matrices

---

# 6. Disadvantages of Arrays

- Fixed size
- Cannot grow automatically
- Insertion in the middle is expensive
- Deletion is expensive
- Wasted memory if oversized
- Overflow if undersized

---

# 7. Memory Representation

Example

```cpp
int arr[5] = {10, 20, 30, 40, 50};
```

Suppose the base address is **1000**.

Each integer occupies **4 bytes**.

```
Address     Value

1000        10

1004        20

1008        30

1012        40

1016        50
```

Formula

```
Address

=

Base Address

+

(Index × Size of Data Type)
```

---

# 8. Array Declaration

Syntax

```cpp
dataType arrayName[size];
```

Example

```cpp
int marks[5];
```

Character array

```cpp
char grade[10];
```

Double array

```cpp
double salary[20];
```

---

# 9. Array Initialization

Initialize during declaration

```cpp
int arr[5] = {1, 2, 3, 4, 5};
```

---

Partial Initialization

```cpp
int arr[5] = {10, 20};
```

Stored as

```
10

20

0

0

0
```

---

Compiler Deduces Size

```cpp
int arr[] = {5, 10, 15};
```

Size

```
3
```

---

Initialize All Elements to Zero

```cpp
int arr[10] = {};
```

---

# 10. Types of Arrays

## One-Dimensional Array

```cpp
int arr[5];
```

---

## Two-Dimensional Array

```cpp
int matrix[3][4];
```

---

## Multi-Dimensional Array

```cpp
int cube[2][3][4];
```

---

# 11. Accessing Array Elements

Syntax

```cpp
arrayName[index]
```

Example

```cpp
int arr[5] = {10, 20, 30, 40, 50};

cout << arr[2];
```

Output

```
30
```

---

Modify Value

```cpp
arr[2] = 100;
```

---

# 12. Array Indexing

Array indexing starts from **0**.

```
Index

0 1 2 3 4

↓

10 20 30 40 50
```

Last index

```
size - 1
```

For

```cpp
int arr[10];
```

Last index

```
9
```

---

# 13. Array Size

Find total size

```cpp
sizeof(arr)
```

Find number of elements

```cpp
sizeof(arr) / sizeof(arr[0])
```

Example

```cpp
int arr[5];

cout << sizeof(arr);
```

Output

```
20
```

Number of elements

```cpp
20 / 4 = 5
```

---

# 14. Input and Output of Arrays

Input

```cpp
#include<iostream>
using namespace std;

int main()
{
    int arr[5];

    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    return 0;
}
```

---

Output

```cpp
for(int i = 0; i < 5; i++)
{
    cout << arr[i] << " ";
}
```

---

# 15. Loops on Arrays

## Using for Loop

```cpp
for(int i = 0; i < 5; i++)
{
    cout << arr[i];
}
```

---

## Using while Loop

```cpp
int i = 0;

while(i < 5)
{
    cout << arr[i];
    i++;
}
```

---

## Using do-while Loop

```cpp
int i = 0;

do
{
    cout << arr[i];
    i++;
}
while(i < 5);
```

---

# 16. Traversing Arrays

Traversal means visiting every element exactly once.

Example

```
10 20 30 40 50
```

Traversal order

```
10

↓

20

↓

30

↓

40

↓

50
```

Time Complexity

```
O(n)
```

---

# 17. Range-Based For Loop

Introduced in C++11.

Syntax

```cpp
for(dataType variable : array)
{
}
```

Example

```cpp
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30};

    for(int x : arr)
    {
        cout << x << " ";
    }
}
```

Output

```
10 20 30
```

Modify elements

```cpp
for(int &x : arr)
{
    x *= 2;
}
```

---

# 18. Passing Arrays to Functions

When an array is passed to a function, it **decays into a pointer** to its first element.

Example

```cpp
void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
```

Equivalent declaration

```cpp
void printArray(int* arr, int size)
{
}
```

---

# 19. Pass by Value vs Pass by Reference

## Pass by Value (Ordinary Variables)

```cpp
void change(int x)
{
    x = 100;
}
```

Original value does not change.

---

## Arrays

Although it looks like pass by value,

```cpp
void fun(int arr[])
```

the array is actually passed as a pointer.

Example

```cpp
#include<iostream>
using namespace std;

void change(int arr[])
{
    arr[0] = 100;
}

int main()
{
    int arr[3] = {1, 2, 3};

    change(arr);

    cout << arr[0];
}
```

Output

```
100
```

The original array changes because the function receives the address of the first element.

---

## Preventing Modification

Use `const`.

```cpp
void display(const int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
```

---

# 20. Arrays in Memory

Example

```cpp
int arr[5] = {10, 20, 30, 40, 50};
```

Memory

```
Address

1000

↓

+----+

|10  |

+----+

1004

↓

+----+

|20  |

+----+

1008

↓

+----+

|30  |

+----+

1012

↓

+----+

|40  |

+----+

1016

↓

+----+

|50  |

+----+
```

Pointer relationship

```cpp
arr == &arr[0]
```

---

# 21. Linear Search

Linear Search checks every element one by one until the target is found or the array ends.

Algorithm

1. Start from index `0`.
2. Compare current element with the target.
3. If equal, return the index.
4. Otherwise, continue.
5. If the end is reached, the element is not present.

Example

```cpp
#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == target)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {5, 9, 2, 8, 1};

    int index = linearSearch(arr, 5, 8);

    cout << index;
}
```

Output

```
3
```

Time Complexity

| Case | Complexity |
|------|------------|
| Best | O(1) |
| Average | O(n) |
| Worst | O(n) |

Space Complexity

```
O(1)
```

---

# 22. Array Reversing

Reverse an array by swapping elements from both ends.

Example

```
Original

10 20 30 40 50

↓

Reversed

50 40 30 20 10
```

Algorithm

1. Set `start = 0`
2. Set `end = size - 1`
3. Swap `arr[start]` and `arr[end]`
4. Increment `start`
5. Decrement `end`
6. Repeat until `start >= end`

Implementation

```cpp
#include<iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while(start < end)
    {
        swap(arr[start], arr[end]);

        start++;
        end--;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    reverseArray(arr, 5);

    for(int x : arr)
    {
        cout << x << " ";
    }
}
```

Output

```
50 40 30 20 10
```

Time Complexity

```
O(n)
```

Space Complexity

```
O(1)
```

---

# 23. Common Array Operations

## Find Maximum

```cpp
int maximum = arr[0];

for(int i = 1; i < size; i++)
{
    if(arr[i] > maximum)
    {
        maximum = arr[i];
    }
}
```

---

## Find Minimum

```cpp
int minimum = arr[0];

for(int i = 1; i < size; i++)
{
    if(arr[i] < minimum)
    {
        minimum = arr[i];
    }
}
```

---

## Calculate Sum

```cpp
int sum = 0;

for(int i = 0; i < size; i++)
{
    sum += arr[i];
}
```

---

## Calculate Average

```cpp
double average = static_cast<double>(sum) / size;
```

---

## Count Even Numbers

```cpp
int count = 0;

for(int i = 0; i < size; i++)
{
    if(arr[i] % 2 == 0)
    {
        count++;
    }
}
```

---

## Copy an Array

```cpp
for(int i = 0; i < size; i++)
{
    copy[i] = arr[i];
}
```

---

# 24. Time Complexity

| Operation | Time Complexity |
|-----------|-----------------|
| Access by Index | O(1) |
| Update by Index | O(1) |
| Traversal | O(n) |
| Linear Search | O(n) |
| Reverse | O(n) |
| Find Maximum | O(n) |
| Find Minimum | O(n) |
| Calculate Sum | O(n) |
| Insert at End (if space available) | O(1) |
| Insert at Beginning | O(n) |
| Insert in Middle | O(n) |
| Delete from Beginning | O(n) |
| Delete from Middle | O(n) |
| Delete from End | O(1) |

Space Complexity

```
O(n)
```

where `n` is the number of elements stored.

---

# 25. Common Mistakes

## Accessing an Invalid Index

Incorrect

```cpp
arr[10];
```

when the array size is `10`.

Valid indices are `0` to `9`.

---

## Forgetting Zero-Based Indexing

Incorrect

```cpp
arr[1];
```

when expecting the first element.

The first element is

```cpp
arr[0];
```

---

## Using `sizeof` on an Array Parameter

```cpp
void fun(int arr[])
{
    cout << sizeof(arr);
}
```

`arr` is treated as a pointer inside the function, so `sizeof(arr)` gives the pointer size, **not** the total array size.

Pass the array size explicitly.

---

## Going Beyond Array Bounds

```cpp
for(int i = 0; i <= size; i++)
```

Incorrect.

Correct

```cpp
for(int i = 0; i < size; i++)
```

---

## Forgetting to Initialize Arrays

```cpp
int arr[5];
```

contains indeterminate values if it is a local array.

Initialize before use.

---

# 26. Best Practices

- Use meaningful array names.
- Keep array sizes manageable.
- Pass the array size to functions.
- Use `const` when the array should not be modified.
- Prefer range-based `for` loops for read-only traversal.
- Validate indices before accessing elements.
- Use `std::array` for fixed-size arrays when possible.
- Use `std::vector` when the size needs to change dynamically.

---

# 27. Interview Questions

### Q1. What is an array?

A collection of elements of the same data type stored in contiguous memory locations.

---

### Q2. Why do array indices start from `0`?

Because the address of `arr[i]` is calculated as:

```
Base Address + (i × Size of Element)
```

Using `0` for the first element simplifies address calculations.

---

### Q3. Are arrays stored contiguously?

Yes.

---

### Q4. Can arrays store different data types?

No. All elements must have the same data type.

---

### Q5. How are arrays passed to functions in C++?

They decay into pointers to their first element.

---

### Q6. What is the time complexity of accessing an array element?

```
O(1)
```

---

### Q7. What is Linear Search?

A searching algorithm that checks each element one by one until the target is found or the array ends.

---

### Q8. What is the time complexity of Linear Search?

- Best Case: `O(1)`
- Average Case: `O(n)`
- Worst Case: `O(n)`

---

### Q9. How do you reverse an array efficiently?

Use the two-pointer technique by swapping the first and last elements and moving inward.

---

### Q10. What is the difference between an array and a vector?

- Arrays have a fixed size.
- `std::vector` can grow and shrink dynamically.

---

# 28. Summary

- An **array** is a fixed-size, contiguous collection of elements of the same data type.
- Arrays provide **constant-time (`O(1)`) random access** using indices.
- Array indexing starts from **0**, and the last valid index is `size - 1`.
- Arrays are stored in **contiguous memory**, making them cache-friendly and efficient.
- Arrays can be traversed using `for`, `while`, `do-while`, and **range-based for** loops.
- When passed to functions, arrays **decay into pointers**, so modifications inside the function affect the original array unless protected with `const`.
- **Linear Search** is the simplest searching algorithm and works on both sorted and unsorted arrays.
- **Array Reversal** is efficiently implemented using the two-pointer technique with `O(n)` time and `O(1)` extra space.
- Arrays form the foundation of advanced data structures such as vectors, matrices, stacks, queues, heaps, hash tables, and graphs.
- A strong understanding of arrays is essential for mastering data structures, algorithms, competitive programming, and software development.

---