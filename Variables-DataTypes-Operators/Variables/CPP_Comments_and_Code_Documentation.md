# Comments and Code Documentation in C++

## Introduction

Comments are an important part of writing clean, readable, and maintainable C++ programs.

A comment is a piece of text written inside a program that is ignored by the compiler during execution.

Comments are used to:

- Explain code logic.
- Improve readability.
- Document important decisions.
- Make debugging easier.
- Help other developers understand the program.

Example:

```cpp
// This program calculates the sum of two numbers

int sum = a + b;
```

The compiler ignores:

```cpp
// This program calculates the sum of two numbers
```

and executes only:

```cpp
int sum = a + b;
```

---

# Why Comments Are Important in DSA

While solving Data Structures and Algorithms problems, code is often:

- Complex.
- Logic-heavy.
- Optimization-focused.
- Difficult to understand later.

Comments help explain:

- Why a particular approach is used.
- How an algorithm works.
- Time complexity.
- Space complexity.
- Important edge cases.

Example:

```cpp
// Binary search works only on sorted arrays
int index = binarySearch(arr, target);
```

---

# What Are Comments?

A comment is a programmer-readable explanation written inside source code.

It provides additional information about:

- Variables.
- Functions.
- Algorithms.
- Logic.
- Optimizations.

Comments are not executed by the computer.

---

# Comments Execution Process

When compiling a C++ program:

```
C++ Source Code

        ↓

Preprocessor Removes Comments

        ↓

Compiler Processes Code

        ↓

Executable Program
```

Comments do not affect:

- Program speed.
- Memory usage.
- Output.

---

# Types of Comments in C++

C++ supports two main types of comments:

```
Comments

   |
   |
   ├── Single Line Comments
   |
   └── Multi Line Comments
```

---

# 1. Single Line Comments

## Definition

A single line comment is used to write comments that occupy only one line.

Syntax:

```cpp
// comment text
```

Everything after:

```cpp
//
```

on that line is ignored by the compiler.

---

# Example

```cpp
#include <iostream>

using namespace std;

int main()
{
    // Store user's age
    int age = 20;

    cout << age;

    return 0;
}
```

The compiler reads:

```cpp
int age = 20;
```

and ignores:

```cpp
// Store user's age
```

---

# Uses of Single Line Comments

Single line comments are commonly used for:

## Explaining Variables

Example:

```cpp
int count = 0; // Stores number of occurrences
```

---

## Explaining Logic

Example:

```cpp
// Find maximum element in array
maximum = max(maximum, current);
```

---

## Marking Sections

Example:

```cpp
// Input section

cin >> n;


// Processing section

solve();
```

---

# 2. Multi Line Comments

## Definition

Multi line comments are used when comments span multiple lines.

Syntax:

```cpp
/*
   Comment line 1
   Comment line 2
*/
```

Everything between:

```
/*
```

and:

```
*/
```

is ignored.

---

# Example

```cpp
/*
This program finds
the maximum element
from an array
*/

#include <iostream>

using namespace std;

int main()
{
    return 0;
}
```

---

# Uses of Multi Line Comments

Multi line comments are useful for:

- Explaining algorithms.
- Adding documentation.
- Writing notes.
- Temporarily disabling code.

---

# Commenting Out Code

Sometimes developers temporarily disable code using comments.

Example:

Original:

```cpp
int result = a + b;

cout << result;
```

Commented:

```cpp
/*
int result = a + b;

cout << result;
*/
```

The compiler ignores this code.

---

# Single Line vs Multi Line Comments

| Single Line Comment | Multi Line Comment |
|---|---|
| Uses `//` | Uses `/* */` |
| Used for short explanations | Used for long explanations |
| Usually one line | Multiple lines |
| Common in daily coding | Common for documentation |

---

# Comments in C++ Program Structure

Example:

```cpp
// Header file for input output operations
#include <iostream>


using namespace std;


// Main function starts execution
int main()
{

    // Program logic goes here

    return 0;
}
```

Comments explain each section.

---

# Good Comments vs Bad Comments

Writing comments does not automatically improve code.

Bad comments create unnecessary noise.

---

# Bad Comment Example

```cpp
int age = 20; // Store age in variable age
```

The comment only repeats the code.

The code is already obvious.

---

# Good Comment Example

```cpp
// Minimum age required for account creation
int minimumAge = 18;
```

The comment explains the meaning.

---

# Rule of Good Comments

A good comment explains:

- Why something exists.
- Why a decision was made.
- What complex logic does.

A bad comment explains:

- What the code already clearly shows.

---

# What Should Be Commented?

## 1. Complex Logic

Example:

```cpp
// Using two pointer approach to reduce
// time complexity from O(n^2) to O(n)
while(left < right)
{
}
```

---

## 2. Important Decisions

Example:

```cpp
// Use long long because multiplication
// can exceed integer range
long long result;
```

---

## 3. Algorithm Explanation

Example:

```cpp
/*
Binary Search Algorithm:

1. Find middle element.
2. Compare with target.
3. Reduce search space by half.
*/
```

---

## 4. Edge Case Handling

Example:

```cpp
// Handle empty array case
if(n == 0)
{
    return;
}
```

---

## 5. Complexity Information

Very useful in DSA.

Example:

```cpp
/*
Time Complexity: O(n)
Space Complexity: O(1)
*/
```

---

# Comments in DSA Solutions

A good DSA solution often contains:

```
Problem Explanation

        ↓

Approach

        ↓

Algorithm Logic

        ↓

Code

        ↓

Complexity Analysis
```

Comments can document these parts.

---

# Example: Array Maximum Problem

```cpp
#include <bits/stdc++.h>

using namespace std;


int main()
{
    vector<int> arr = {10, 20, 5, 40};


    // Assume first element is maximum
    int maximum = arr[0];


    // Traverse remaining elements
    for(int i = 1; i < arr.size(); i++)
    {
        // Update maximum if current element is greater
        if(arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }


    cout << maximum;


    return 0;
}
```

---

# Documentation Comments

Large projects often use special comments for documentation.

Example:

```cpp
/**
 * Function calculates factorial of a number
 *
 * @param n Input number
 * @return factorial value
 */
int factorial(int n)
{
}
```

These comments can be converted into documentation using tools.

---

# Comments for Functions

Functions should explain:

- Purpose.
- Parameters.
- Return value.

Example:

```cpp
/*
Function:
    Searches an element using linear search

Parameters:
    arr    - Input array
    target - Element to find

Returns:
    Index if found
    -1 otherwise
*/
```

---

# Comments for Classes

Example:

```cpp
/*
Node class represents
a single node of linked list
*/
class Node
{

};
```

---

# Comments in Competitive Programming

In competitive programming, excessive comments are avoided because:

- Code needs to be short.
- Time is limited.
- Logic is usually simple.

However, useful comments include:

```cpp
// Prefix sum calculation

// Binary search on answer

// Sliding window approach

// Store frequency count
```

---

# Comments in GitHub Public Repositories

When sharing code publicly, comments improve:

- Learning experience.
- Code understanding.
- Collaboration.

A public DSA repository should contain comments for:

- Difficult algorithms.
- Optimization tricks.
- Important concepts.

---

# Recommended Comment Style for DSA Repository

Example:

```cpp
/*
Problem:
Find maximum element in array

Approach:
Traverse array once and keep track
of maximum value.

Time Complexity:
O(n)

Space Complexity:
O(1)
*/
```

---

# Inline Comments

Inline comments appear next to code.

Example:

```cpp
int size = 10; // Maximum array size
```

Use them carefully.

Too many inline comments reduce readability.

---

# Section Comments

Used to divide large programs.

Example:

```cpp
// =======================
// Input Section
// =======================


cin >> n;


// =======================
// Processing Section
// =======================


solve();
```

---

# Nested Comments

C++ does not support nested block comments.

Invalid:

```cpp
/*
    Outer comment

    /*
       Inner comment
    */

*/
```

This causes compilation errors.

---

# Comment Shortcuts in VS Code

## Comment Current Line

Windows/Linux:

```
Ctrl + /
```

Mac:

```
Cmd + /
```

---

## Comment Multiple Lines

Select lines:

```
Ctrl + /
```

VS Code automatically adds:

```cpp
//
```

---

# Removing Comments

Comments can be removed automatically using:

- Code formatting tools.
- Build tools.
- Preprocessors.

They do not affect program output.

---

# Comments and Memory Usage

Comments:

- Do not use RAM.
- Do not increase executable size significantly.
- Do not affect runtime performance.

They exist only in source code.

---

# Common Mistakes While Writing Comments

## 1. Explaining Obvious Code

Bad:

```cpp
i++;
// Increment i by one
```

---

## 2. Outdated Comments

Wrong:

```cpp
// Array size is 10

int size = 20;
```

Comments should always match the code.

---

## 3. Too Many Comments

Avoid commenting every line.

Example:

```cpp
// Create variable
int x;

// Add value
x = 10;
```

This reduces readability.

---

## 4. Writing Comments Instead of Clean Code

Bad:

```cpp
// x stores maximum value from array
int x;
```

Better:

```cpp
int maximumValue;
```

Good naming reduces the need for comments.

---

# Best Practices for Writing Comments

## Write Comments Before Complex Logic

Example:

```cpp
// Use prefix sum to answer range queries efficiently
```

---

## Explain Why, Not What

Bad:

```cpp
// Loop through array
for(...)
```

Good:

```cpp
// Traverse array once to find maximum element
for(...)
```

---

## Keep Comments Updated

Whenever logic changes, update comments.

---

## Use Consistent Style

Maintain the same comment format throughout the project.

---

# Comments Template for DSA Problems

```cpp
/*
Problem:
    Describe the problem.

Approach:
    Explain algorithm idea.

Algorithm:
    Step 1:
    Step 2:
    Step 3:

Time Complexity:
    O(?)

Space Complexity:
    O(?)
*/
```

---

# Example Complete DSA File Documentation

```cpp
/*
Problem:
Find whether an element exists in an array.

Approach:
Use linear search and compare each element
with the target value.

Algorithm:
1. Start from first element.
2. Compare each element with target.
3. Return index if found.
4. Return -1 otherwise.

Time Complexity:
O(n)

Space Complexity:
O(1)
*/


#include <bits/stdc++.h>

using namespace std;


int main()
{
    vector<int> arr = {1,2,3,4,5};

    int target = 3;


    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] == target)
        {
            cout << i;
            return 0;
        }
    }


    cout << -1;


    return 0;
}
```

---

# Comments and Code Quality

Clean code follows:

```
Good Naming

        +

Proper Structure

        +

Useful Comments

        +

Simple Logic

        =

Readable Code
```

Comments should support good code, not replace it.

---

# Key Takeaways

- Comments are ignored by the compiler.
- C++ supports single-line and multi-line comments.
- Comments improve readability and maintainability.
- Good comments explain reasoning, not obvious actions.
- DSA solutions benefit from comments explaining approach and complexity.
- Public repositories should contain meaningful documentation.
- Avoid excessive and outdated comments.
- Clean code with good naming reduces unnecessary comments.

---

# Final Learning Workflow

```
Understand Problem

        ↓

Design Algorithm

        ↓

Write Pseudocode

        ↓

Implement C++ Solution

        ↓

Add Useful Comments

        ↓

Analyze Complexity

        ↓

Publish and Document
```

Writing meaningful comments is a programming skill that improves code quality, collaboration, and long-term understanding.