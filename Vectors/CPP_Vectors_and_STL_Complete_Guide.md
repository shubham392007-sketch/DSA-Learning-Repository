# Vectors and Standard Template Library (STL) in C++ – Complete Guide

> A comprehensive guide covering the Standard Template Library (STL), Vectors, Vector Syntax, Vector Memory Management, Static vs Dynamic Allocation, Range-Based (For-Each) Loops, Vector Functions, Iterators, Capacity Management, Performance Analysis, Best Practices, and Interview Questions.

---

# Table of Contents

1. Introduction to STL
2. What is the Standard Template Library?
3. Components of STL
4. Why STL is Important
5. Introduction to Vectors
6. Why Use Vectors Instead of Arrays?
7. Array vs Vector
8. Vector Declaration
9. Vector Initialization
10. Vector Memory Representation
11. Static vs Dynamic Allocation
12. Vector Syntax
13. Accessing Vector Elements
14. Input and Output
15. Traversing a Vector
16. Range-Based (For-Each) Loop
17. Iterators
18. Capacity vs Size
19. Dynamic Memory Growth
20. Common Vector Functions
21. Insertion and Deletion
22. Copying Vectors
23. Passing Vectors to Functions
24. Nested Vectors (2D Vectors)
25. Time Complexity
26. Common Mistakes
27. Best Practices
28. Interview Questions
29. Summary

---

# 1. Introduction to STL

The **Standard Template Library (STL)** is a powerful library in C++ that provides ready-made data structures and algorithms.

Instead of writing everything from scratch, programmers can use STL to build applications faster and more efficiently.

Example

```cpp
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <set>
#include <map>
```

The STL is one of the biggest advantages of C++.

---

# 2. What is the Standard Template Library?

STL is a collection of **generic classes and functions**.

It is based on **templates**, allowing the same code to work with different data types.

Example

```cpp
vector<int>
vector<double>
vector<string>
```

The same vector implementation works for different types.

---

# 3. Components of STL

STL mainly consists of four components.

```
             STL
              │
    ┌─────────┼─────────┐
    │         │         │
Containers Algorithms Iterators
              │
          Function Objects
```

---

## Containers

Store data.

Examples

- vector
- array
- deque
- list
- stack
- queue
- priority_queue
- set
- multiset
- unordered_set
- map
- unordered_map

---

## Algorithms

Perform operations on containers.

Examples

```cpp
sort()

reverse()

find()

count()

binary_search()

max_element()

min_element()
```

---

## Iterators

Used to traverse containers.

Similar to pointers.

Example

```cpp
vector<int>::iterator it;
```

---

## Function Objects (Functors)

Objects that behave like functions.

Example

```cpp
greater<int>()
less<int>()
```

Used with STL algorithms.

---

# 4. Why STL is Important

Advantages

- Saves development time
- Well optimized
- Tested extensively
- Easy to use
- Portable
- Generic programming
- Improves code readability
- Widely used in interviews and competitive programming

---

# 5. Introduction to Vectors

A **vector** is a dynamic array provided by STL.

Unlike normal arrays, vectors can automatically increase or decrease their size.

Header

```cpp
#include <vector>
```

Namespace

```cpp
using namespace std;
```

---

# 6. Why Use Vectors Instead of Arrays?

Arrays

```
Fixed Size
```

Vectors

```
Dynamic Size
```

Example

```cpp
vector<int> numbers;
```

Initially

```
Size = 0
```

Elements can be added later.

---

# 7. Array vs Vector

| Feature | Array | Vector |
|----------|-------|--------|
| Size | Fixed | Dynamic |
| Memory | Static | Dynamic |
| Resize | No | Yes |
| STL Support | No | Yes |
| Bounds Checking (`at`) | No | Yes |
| Insert/Delete | Difficult | Easy at end |
| Automatic Growth | No | Yes |

---

# 8. Vector Declaration

Syntax

```cpp
vector<dataType> vectorName;
```

Example

```cpp
vector<int> numbers;
```

Other examples

```cpp
vector<double> marks;

vector<char> letters;

vector<string> names;
```

---

# 9. Vector Initialization

## Empty Vector

```cpp
vector<int> v;
```

---

## Fixed Size

```cpp
vector<int> v(5);
```

Output

```
0 0 0 0 0
```

---

## Fixed Size with Initial Value

```cpp
vector<int> v(5, 10);
```

Output

```
10 10 10 10 10
```

---

## Using Initializer List

```cpp
vector<int> v = {1, 2, 3, 4, 5};
```

---

## Copy Constructor

```cpp
vector<int> copy(v);
```

---

## Assignment

```cpp
vector<int> another = v;
```

---

# 10. Vector Memory Representation

Suppose

```cpp
vector<int> v = {10,20,30,40};
```

Memory

```
Index

0   1   2   3

↓

+----+----+----+----+

|10  |20  |30  |40  |

+----+----+----+----+
```

Like arrays,

vectors store elements in **contiguous memory**.

---

# 11. Static vs Dynamic Allocation

## Static Allocation

Memory is allocated at compile time.

Example

```cpp
int arr[5];
```

Memory

```
Stack

+----+
|10  |
+----+
|20  |
+----+
|30  |
+----+
```

Characteristics

- Fixed size
- Faster allocation
- Cannot resize
- Stored on the stack (for local arrays)

---

## Dynamic Allocation

Memory is allocated during runtime.

Traditional C++

```cpp
int* arr = new int[5];
```

Memory

```
Stack

Pointer

↓

Heap

+----+
|10  |
+----+
|20  |
+----+
```

Must be released

```cpp
delete[] arr;
```

---

## Dynamic Allocation with Vector

```cpp
vector<int> v;
```

The vector object is typically stored on the stack, while its elements are stored dynamically on the heap.

Advantages

- Automatic memory management
- Automatic resizing
- No manual `delete`
- Safe and convenient

---

# 12. Vector Syntax

Create

```cpp
vector<int> v;
```

Insert

```cpp
v.push_back(10);
```

Access

```cpp
v[0];
```

Delete

```cpp
v.pop_back();
```

Size

```cpp
v.size();
```

---

# 13. Accessing Vector Elements

Using Index

```cpp
cout << v[0];
```

---

Using `at()`

```cpp
cout << v.at(0);
```

`at()` performs bounds checking and throws an exception if the index is invalid.

---

First Element

```cpp
v.front();
```

---

Last Element

```cpp
v.back();
```

---

# 14. Input and Output

Input

```cpp
vector<int> v(5);

for(int i = 0; i < 5; i++)
{
    cin >> v[i];
}
```

---

Output

```cpp
for(int i = 0; i < v.size(); i++)
{
    cout << v[i] << " ";
}
```

---

# 15. Traversing a Vector

Using `for`

```cpp
for(int i = 0; i < v.size(); i++)
{
    cout << v[i];
}
```

---

Using `while`

```cpp
int i = 0;

while(i < v.size())
{
    cout << v[i];
    i++;
}
```

---

# 16. Range-Based (For-Each) Loop

Introduced in C++11.

Syntax

```cpp
for(dataType variable : vector)
{
}
```

Example

```cpp
for(int x : v)
{
    cout << x << " ";
}
```

Output

```
10 20 30 40
```

---

Modify Elements

```cpp
for(int &x : v)
{
    x *= 2;
}
```

Without `&`, `x` is only a copy.

---

Using `const`

```cpp
for(const int &x : v)
{
    cout << x;
}
```

Prevents modification and avoids unnecessary copying.

---

# 17. Iterators

Iterator Declaration

```cpp
vector<int>::iterator it;
```

---

Begin Iterator

```cpp
v.begin();
```

---

End Iterator

```cpp
v.end();
```

---

Traversal

```cpp
for(auto it = v.begin(); it != v.end(); it++)
{
    cout << *it;
}
```

---

Reverse Iterator

```cpp
for(auto it = v.rbegin(); it != v.rend(); it++)
{
    cout << *it;
}
```

---

# 18. Capacity vs Size

Many beginners confuse these.

## Size

Number of elements currently stored.

```cpp
v.size();
```

---

## Capacity

Total allocated storage available before reallocation is needed.

```cpp
v.capacity();
```

Example

```
Size

5

Capacity

8
```

---

# 19. Dynamic Memory Growth

Suppose

```
Capacity = 4
```

```
10

20

30

40
```

Insert one more element.

The vector allocates a larger block of memory (growth factor is implementation-defined, often around 1.5×–2×), copies existing elements, inserts the new element, and releases the old storage.

```
Capacity

8
```

This process is called **reallocation**.

---

Reserve Memory

```cpp
v.reserve(100);
```

Avoids frequent reallocations.

---

Shrink Capacity

```cpp
v.shrink_to_fit();
```

Requests removal of unused capacity (non-binding request).

---

# 20. Common Vector Functions

## push_back()

Adds element at the end.

```cpp
v.push_back(50);
```

---

## pop_back()

Removes last element.

```cpp
v.pop_back();
```

---

## size()

Returns current number of elements.

```cpp
v.size();
```

---

## capacity()

Returns allocated capacity.

```cpp
v.capacity();
```

---

## empty()

Checks if vector is empty.

```cpp
v.empty();
```

Returns

```
true

or

false
```

---

## clear()

Removes all elements.

```cpp
v.clear();
```

---

## front()

Returns first element.

```cpp
v.front();
```

---

## back()

Returns last element.

```cpp
v.back();
```

---

## at()

Safe access.

```cpp
v.at(3);
```

---

## resize()

Changes vector size.

```cpp
v.resize(10);
```

---

## reserve()

Allocates capacity.

```cpp
v.reserve(100);
```

---

## assign()

Assigns new values.

```cpp
v.assign(5, 100);
```

Output

```
100 100 100 100 100
```

---

## swap()

Exchange contents.

```cpp
v1.swap(v2);
```

---

# 21. Insertion and Deletion

Insert at Beginning

```cpp
v.insert(v.begin(), 100);
```

---

Insert at Position

```cpp
v.insert(v.begin() + 2, 50);
```

---

Erase One Element

```cpp
v.erase(v.begin() + 3);
```

---

Erase Range

```cpp
v.erase(v.begin(), v.begin() + 2);
```

---

# 22. Copying Vectors

```cpp
vector<int> a = {1,2,3};

vector<int> b = a;
```

Deep copy is performed.

Changing `b` does not affect `a`.

---

# 23. Passing Vectors to Functions

## Pass by Value

```cpp
void print(vector<int> v)
{
}
```

Creates a copy.

Slower for large vectors.

---

## Pass by Reference

```cpp
void modify(vector<int> &v)
{
}
```

No copy.

Original vector can be modified.

---

## Read-Only Reference

```cpp
void display(const vector<int> &v)
{
}
```

Recommended when modification is not required.

---

# 24. Nested Vectors (2D Vectors)

Create Matrix

```cpp
vector<vector<int>> matrix;
```

Initialize

```cpp
vector<vector<int>> matrix =
{
    {1,2,3},
    {4,5,6},
    {7,8,9}
};
```

Access

```cpp
matrix[1][2];
```

Output

```
6
```

---

# 25. Time Complexity

| Operation | Complexity |
|-----------|------------|
| Access by Index | O(1) |
| `at()` | O(1) |
| `push_back()` (amortized) | O(1) |
| `push_back()` (during reallocation) | O(n) |
| `pop_back()` | O(1) |
| Insert at End | O(1) amortized |
| Insert at Beginning | O(n) |
| Insert in Middle | O(n) |
| Erase at End | O(1) |
| Erase at Beginning | O(n) |
| Erase in Middle | O(n) |
| Traversal | O(n) |
| Search (Linear) | O(n) |
| Clear | O(n) |

Space Complexity

```
O(n)
```

---

# 26. Common Mistakes

## Using `[]` with an Invalid Index

```cpp
v[10];
```

Undefined behavior if the index is out of range.

Prefer

```cpp
v.at(10);
```

when bounds checking is needed.

---

## Forgetting to Include `<vector>`

```cpp
#include <vector>
```

is required.

---

## Passing Large Vectors by Value

```cpp
void fun(vector<int> v)
```

Creates a copy.

Prefer

```cpp
void fun(const vector<int>& v)
```

---

## Confusing Capacity with Size

```cpp
v.capacity();
```

does **not** tell how many elements are stored.

Use

```cpp
v.size();
```

---

## Holding Invalid Iterators

After operations such as reallocation, insertion, or erase, some iterators and references may become invalid.

---

# 27. Best Practices

- Prefer `std::vector` over raw arrays for most applications.
- Use `const vector<T>&` for read-only function parameters.
- Use `vector<T>&` when modifications are required.
- Reserve capacity in advance if the approximate size is known.
- Prefer `at()` when safety is more important than speed.
- Use range-based `for` loops for clean traversal.
- Use `auto` with iterators to improve readability.
- Avoid unnecessary copying of vectors.
- Remember that insertions or deletions in the middle are expensive.

---

# 28. Interview Questions

### Q1. What is a vector?

A dynamic array provided by the C++ Standard Template Library.

---

### Q2. How is a vector different from an array?

A vector automatically resizes itself, whereas an array has a fixed size.

---

### Q3. What is the difference between `size()` and `capacity()`?

- `size()` returns the number of stored elements.
- `capacity()` returns the allocated storage before reallocation is needed.

---

### Q4. What happens when a vector becomes full?

It allocates a larger memory block, copies existing elements, inserts the new element, and releases the old memory.

---

### Q5. What is the complexity of `push_back()`?

- Amortized: `O(1)`
- During reallocation: `O(n)`

---

### Q6. Why is `push_front()` not available for vectors?

Because inserting at the beginning requires shifting all existing elements, making it inefficient.

---

### Q7. Why should vectors usually be passed by reference?

To avoid copying large amounts of data and improve performance.

---

### Q8. Which function safely accesses vector elements?

```cpp
at()
```

---

### Q9. Which STL component does `vector` belong to?

The **Container** component.

---

### Q10. When should you use `reserve()`?

When the approximate number of elements is known in advance to reduce reallocations.

---

# 29. Summary

- The **Standard Template Library (STL)** provides generic containers, algorithms, iterators, and function objects that simplify C++ programming.
- A **vector** is a dynamic array that stores elements in contiguous memory while automatically managing memory allocation.
- Vectors support automatic resizing, making them more flexible than fixed-size arrays.
- The vector object typically resides on the stack, while its elements are dynamically allocated on the heap.
- **Range-based (for-each) loops** offer a clean and readable way to traverse vectors, with references allowing in-place modification.
- Common vector functions such as `push_back()`, `pop_back()`, `size()`, `capacity()`, `clear()`, `insert()`, `erase()`, and `reserve()` provide efficient container management.
- Passing vectors by **const reference** avoids unnecessary copying and is the preferred approach for read-only operations.
- Understanding the difference between **size** and **capacity**, along with vector reallocation behavior, is essential for writing efficient programs.
- Vectors form the foundation for many advanced data structures and are extensively used in software development, competitive programming, system programming, and technical interviews.

---