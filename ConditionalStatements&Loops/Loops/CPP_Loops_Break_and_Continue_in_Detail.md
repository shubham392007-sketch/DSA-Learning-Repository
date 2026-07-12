# Loops, Break and Continue in C++

## Introduction

Loops are one of the most important concepts in programming and Data Structures and Algorithms.

A loop allows a program to execute a block of code repeatedly until a specific condition becomes false.

Without loops, programmers would have to write the same instructions multiple times.

Example:

Without loop:

```cpp
cout << 1;
cout << 2;
cout << 3;
cout << 4;
cout << 5;
```

With loop:

```cpp
for(int i = 1; i <= 5; i++)
{
    cout << i;
}
```

The loop executes the same instruction multiple times efficiently.

---

# Why Loops Are Important in DSA

Loops are used everywhere in Data Structures and Algorithms.

Examples:

## Array Traversal

```cpp
for(int i = 0; i < n; i++)
{
    cout << arr[i];
}
```

---

## Searching

```cpp
for(int i = 0; i < n; i++)
{
    if(arr[i] == target)
    {
        return i;
    }
}
```

---

## Sorting

Bubble Sort:

```cpp
for(int i = 0; i < n; i++)
{
    for(int j = 0; j < n-i-1; j++)
    {

    }
}
```

---

## Graph Traversal

Loops are used to:

- Visit nodes.
- Traverse edges.
- Process neighbors.

---

# What is a Loop?

A loop is a control structure that repeats a set of instructions while a condition remains true.

General structure:

```
Initialization

        ↓

Condition Check

        ↓

Execute Code

        ↓

Update

        ↓

Condition Check Again
```

---

# Loop Execution Flow

```
          Start

            |

      Initialize Variable

            |

       Check Condition

            |

      Condition True?

        /          \

      Yes            No

       |              |

 Execute Code       End

       |

 Update Variable

       |

 Repeat
```

---

# Types of Loops in C++

C++ provides three main loops:

```
Loops

 |
 |
 ├── for Loop
 |
 ├── while Loop
 |
 └── do-while Loop
```

Additional concepts:

```
Nested Loops

Break Statement

Continue Statement
```

---

# 1. for Loop

## Definition

A for loop is used when the number of iterations is known beforehand.

Syntax:

```cpp
for(initialization; condition; update)
{
    // code
}
```

---

# Structure of for Loop

Example:

```cpp
for(int i = 0; i < 5; i++)
{
    cout << i;
}
```

Components:

```
for

 |

Initialization

 |

Condition

 |

Update

 |

Loop Body
```

---

# Initialization

Executed only once at the beginning.

Example:

```cpp
int i = 0;
```

Purpose:

- Create loop variable.
- Set starting value.

---

# Condition

Checked before every iteration.

Example:

```cpp
i < 5
```

If true:

```
Execute loop body
```

If false:

```
Stop loop
```

---

# Update

Executed after every iteration.

Example:

```cpp
i++
```

Changes loop variable.

---

# Example: Print Numbers

```cpp
#include <iostream>

using namespace std;

int main()
{
    for(int i = 1; i <= 5; i++)
    {
        cout << i << endl;
    }

    return 0;
}
```

Output:

```
1
2
3
4
5
```

---

# Execution Dry Run

Code:

```cpp
for(int i=1; i<=3; i++)
{
    cout<<i;
}
```

Execution:

| Iteration | i Value | Condition | Output |
|-|-|-|-|
| 1 | 1 | true | 1 |
| 2 | 2 | true | 2 |
| 3 | 3 | true | 3 |
| 4 | 4 | false | Stop |

---

# 2. while Loop

## Definition

A while loop executes as long as the condition is true.

Syntax:

```cpp
while(condition)
{
    // code
}
```

---

# Example

```cpp
int i = 1;

while(i <= 5)
{
    cout << i << endl;

    i++;
}
```

Output:

```
1
2
3
4
5
```

---

# while Loop Flow

```
Initialize

    |

Check Condition

    |

True?

 /     \

Yes     No

 |       |

Execute  End

 |

Update

 |

Repeat
```

---

# Important Rule of while Loop

Always update the loop variable.

Wrong:

```cpp
int i = 1;

while(i <= 5)
{
    cout << i;
}
```

This creates an infinite loop.

Reason:

```
i never changes
```

---

# 3. do-while Loop

## Definition

A do-while loop executes the code first and checks the condition afterward.

Syntax:

```cpp
do
{

}
while(condition);
```

---

# Example

```cpp
int i = 1;

do
{
    cout << i << endl;

    i++;

}
while(i <= 5);
```

Output:

```
1
2
3
4
5
```

---

# do-while Flow

```
Start

 |

Execute Code

 |

Check Condition

 |

True?

 /    \

Yes    No

 |      |

Repeat  End
```

---

# Difference Between while and do-while

| while Loop | do-while Loop |
|-|-|
| Condition checked first | Code executes first |
| May execute zero times | Executes at least once |
| Entry controlled loop | Exit controlled loop |

---

# Example Difference

while:

```cpp
int i = 10;

while(i < 5)
{
    cout << i;
}
```

Output:

```
Nothing
```

Because condition is false.

---

do-while:

```cpp
int i = 10;

do
{
    cout << i;
}
while(i < 5);
```

Output:

```
10
```

Because execution happens before checking.

---

# Nested Loops

## Definition

A loop inside another loop is called a nested loop.

Syntax:

```cpp
for(...)
{
    for(...)
    {

    }
}
```

---

# Example

Printing pattern:

```cpp
for(int i = 1; i <= 3; i++)
{
    for(int j = 1; j <= 3; j++)
    {
        cout << "*";
    }

    cout << endl;
}
```

Output:

```
***
***
***
```

---

# Nested Loop Execution

Outer loop controls:

```
Rows
```

Inner loop controls:

```
Columns
```

---

# Nested Loops in DSA

Used in:

- Matrix problems.
- Sorting algorithms.
- Pattern printing.
- Pair comparisons.

Example:

Checking all pairs:

```cpp
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {

    }
}
```

Time Complexity:

```
O(n²)
```

---

# Infinite Loops

An infinite loop never stops executing.

Example:

```cpp
while(true)
{
    cout<<"Hello";
}
```

---

# Common Causes of Infinite Loops

## Missing Update

Wrong:

```cpp
while(i < 10)
{
    cout<<i;
}
```

---

## Wrong Condition

Example:

```cpp
for(int i=10;i>0;i++)
{

}
```

The value increases forever.

---

# Infinite Loop Use Cases

Sometimes intentional:

- Servers.
- Embedded systems.
- Operating systems.

Example:

```cpp
while(true)
{
    checkSensor();
}
```

---

# Loop Control Statements

Loop control statements change normal loop execution.

C++ provides:

```
Break

Continue
```

---

# Break Statement

## Definition

The break statement immediately terminates the current loop.

Syntax:

```cpp
break;
```

When break executes:

```
Loop stops immediately

↓

Control moves outside loop
```

---

# Example of break

```cpp
for(int i = 1; i <= 10; i++)
{
    if(i == 5)
    {
        break;
    }

    cout << i << endl;
}
```

Output:

```
1
2
3
4
```

---

# Break Execution Flow

```
Loop Starts

      |

Condition Check

      |

Execute Code

      |

Break Condition?

    /       \

  Yes        No

   |          |

Exit Loop   Continue

```

---

# Why Use break?

Break is used when:

- Required result is found.
- Further iterations are unnecessary.
- A condition forces termination.

---

# Break in Searching

Example:

Linear search:

```cpp
for(int i=0;i<n;i++)
{
    if(arr[i]==target)
    {
        cout<<"Found";

        break;
    }
}
```

Once found:

```
No need to check remaining elements
```

---

# Break in Nested Loops

Break only exits the nearest loop.

Example:

```cpp
for(int i=1;i<=3;i++)
{
    for(int j=1;j<=3;j++)
    {
        if(j==2)
        {
            break;
        }

        cout<<j;
    }
}
```

The inner loop stops.

Outer loop continues.

---

# Breaking Multiple Loops

C++ does not have a direct multi-level break.

Methods:

- Use flags.
- Use functions.
- Return from function.

Example:

```cpp
bool found=false;

for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        if(condition)
        {
            found=true;
            break;
        }
    }

    if(found)
        break;
}
```

---

# Continue Statement

## Definition

The continue statement skips the current iteration and moves to the next iteration.

Syntax:

```cpp
continue;
```

---

# Example

```cpp
for(int i=1;i<=5;i++)
{
    if(i==3)
    {
        continue;
    }

    cout<<i<<endl;
}
```

Output:

```
1
2
4
5
```

The value:

```
3
```

is skipped.

---

# Continue Execution Flow

```
Loop Starts

      |

Check Condition

      |

Execute Code

      |

Continue?

   /       \

 Yes        No

  |          |

Skip      Execute Remaining Code

  |

Next Iteration
```

---

# Why Use continue?

Used when:

- Some cases should be ignored.
- Remaining logic should continue.
- Filtering data.

---

# Continue Example in DSA

Print only positive numbers:

```cpp
for(int i=0;i<n;i++)
{
    if(arr[i]<0)
    {
        continue;
    }

    cout<<arr[i];
}
```

Negative numbers are skipped.

---

# Break vs Continue

| Break | Continue |
|-|-|
| Stops entire loop | Skips current iteration |
| Exits loop | Moves to next iteration |
| Used for termination | Used for ignoring cases |

---

# Example Comparison

## Break

```cpp
for(int i=1;i<=5;i++)
{
    if(i==3)
        break;

    cout<<i;
}
```

Output:

```
12
```

---

## Continue

```cpp
for(int i=1;i<=5;i++)
{
    if(i==3)
        continue;

    cout<<i;
}
```

Output:

```
1245
```

---

# Loop Variables Scope

Example:

```cpp
for(int i=0;i<5;i++)
{

}

cout<<i;
```

Error:

```
i is not accessible
```

Because:

```
i exists only inside loop
```

---

# Multiple Variables in Loop

C++ allows multiple variables.

Example:

```cpp
for(int i=0,j=5;i<j;i++,j--)
{
    cout<<i<<" "<<j;
}
```

---

# Omitting Loop Parts

C++ allows flexible syntax.

Example:

```cpp
int i=0;

for(; i<5;)
{
    cout<<i;

    i++;
}
```

Works like a while loop.

---

# Range-Based for Loop

Modern C++ provides range-based loops.

Syntax:

```cpp
for(data_type variable : collection)
{

}
```

---

# Example

```cpp
vector<int> arr={1,2,3,4};

for(int value : arr)
{
    cout<<value;
}
```

Output:

```
1234
```

---

# Advantages of Range-Based Loop

- Cleaner syntax.
- No index handling.
- Less chance of errors.

---

# Range-Based Loop with Reference

Copy:

```cpp
for(int x : arr)
```

Creates copies.

Reference:

```cpp
for(int &x : arr)
```

Works directly on original values.

---

# Loops and Time Complexity

Loops directly affect algorithm complexity.

---

# Single Loop

Example:

```cpp
for(int i=0;i<n;i++)
{

}
```

Complexity:

```
O(n)
```

---

# Nested Loop

Example:

```cpp
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {

    }
}
```

Complexity:

```
O(n²)
```

---

# Multiple Independent Loops

Example:

```cpp
for(int i=0;i<n;i++)
{

}

for(int j=0;j<n;j++)
{

}
```

Complexity:

```
O(n+n)

= O(n)
```

---

# Common Loop Mistakes

## 1. Off-by-One Error

Wrong:

```cpp
for(int i=0;i<=n;i++)
```

Accesses:

```
n+1 elements
```

Correct:

```cpp
for(int i=0;i<n;i++)
```

---

## 2. Infinite Loop

Wrong:

```cpp
for(int i=0;i<10;)
{

}
```

No update.

---

## 3. Wrong Starting Index

Array:

```
index 0 to n-1
```

Not:

```
1 to n
```

---

## 4. Modifying Loop Variable Incorrectly

Example:

```cpp
for(int i=0;i<n;i++)
{
    i++;
}
```

Can skip elements.

---

# Best Practices for Loops

- Choose the correct loop type.
- Keep loop conditions simple.
- Avoid unnecessary nested loops.
- Understand time complexity.
- Use meaningful loop variables.
- Prevent infinite loops.
- Handle boundary conditions carefully.

---

# Complete Example Program

```cpp
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> arr = {1,2,3,4,5};


    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==3)
        {
            cout<<"Found";
            break;
        }

        cout<<arr[i]<<endl;
    }


    return 0;
}
```

Output:

```
1
2
Found
```

---

# Loops in Problem Solving Approach

Before writing a loop:

1. Identify repeated work.
2. Decide number of iterations.
3. Choose loop type.
4. Define initialization.
5. Define stopping condition.
6. Define update logic.
7. Analyze complexity.

---

# Key Takeaways

- Loops execute code repeatedly.
- C++ provides for, while, and do-while loops.
- for loops are useful when iterations are known.
- while loops are useful when conditions control repetition.
- do-while executes at least once.
- Nested loops are used for complex problems but increase complexity.
- break terminates a loop immediately.
- continue skips the current iteration.
- Loop efficiency directly affects algorithm performance.
- Mastering loops is essential for DSA problem solving.

---

# Final DSA Learning Flow

```
Understand Problem

        ↓

Identify Repetitive Operations

        ↓

Choose Loop Structure

        ↓

Write Conditions

        ↓

Handle Break/Continue Cases

        ↓

Analyze Complexity

        ↓

Optimize Solution
```

Loops are the backbone of programming logic and form the foundation for implementing almost every Data Structures and Algorithms concept.