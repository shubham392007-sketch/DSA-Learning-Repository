# Pattern Problems in C++ (DSA Foundation)

## Introduction

Pattern printing is one of the first practical applications of loops in programming and is an essential part of every Data Structures and Algorithms (DSA) course.

Although pattern problems rarely appear directly in coding interviews, they play a significant role in developing logical thinking, loop understanding, and problem-solving skills.

When solving pattern problems, the primary objective is **not** to memorize patterns. Instead, it is to learn how to think systematically by analyzing rows, columns, spaces, and character placement.

Mastering pattern problems helps build the mindset required for solving more advanced topics such as recursion, arrays, matrices, dynamic programming, graphs, and tree traversals.

---

# Why Learn Pattern Problems?

Pattern problems teach programmers how to:

- Think logically.
- Understand nested loops.
- Analyze rows and columns.
- Break large problems into smaller steps.
- Convert observations into algorithms.
- Improve debugging skills.
- Develop problem-solving ability.

Pattern problems improve one of the most important skills in DSA:

> **Observation**

---

# Real Purpose of Pattern Printing

Most beginners think pattern printing is about printing stars.

It is not.

Pattern printing is actually about learning:

```
Observation

        ↓

Mathematical Relationship

        ↓

Loop Construction

        ↓

Implementation
```

---

# Skills Developed Through Pattern Problems

Pattern problems improve:

- Loop construction
- Nested loop understanding
- Mathematical thinking
- Conditional logic
- Coordinate visualization
- Time complexity analysis
- Algorithm design

---

# Prerequisites

Before learning patterns, you should know:

- Variables
- Data types
- Operators
- Conditional statements
- for loop
- while loop
- Nested loops

---

# Understanding Rows and Columns

Almost every pattern consists of:

```
Rows

×

Columns
```

Example:

```
*****
*****
*****
*****
```

Rows:

```
4
```

Columns:

```
5
```

Each row is printed using the outer loop.

Each column is printed using the inner loop.

---

# Nested Loop Structure

Almost every pattern follows this structure:

```cpp
for(each row)
{
    for(each column)
    {
        print something
    }

    move to next line
}
```

The outer loop controls the rows.

The inner loop controls the columns.

---

# General Flow of Pattern Printing

```
Start

   ↓

Number of Rows

   ↓

Outer Loop

   ↓

Inner Loop

   ↓

Print

   ↓

Next Line

   ↓

Repeat
```

---

# How to Solve Any Pattern

Never start coding immediately.

Instead, follow this process:

```
Observe Pattern

        ↓

Count Rows

        ↓

Count Columns

        ↓

Count Spaces

        ↓

Count Symbols

        ↓

Identify Formula

        ↓

Write Loops

        ↓

Implement
```

---

# The 7-Step Pattern Solving Strategy

## Step 1 — Count Rows

Example:

```
*
**
***
****
```

Rows:

```
4
```

Outer loop:

```cpp
for(int i = 1; i <= 4; i++)
```

---

## Step 2 — Count Columns

First row:

```
1 star
```

Second row:

```
2 stars
```

Third row:

```
3 stars
```

Formula:

```
Columns = Row Number
```

---

## Step 3 — Count Spaces

Example:

```
   *
  **
 ***
****
```

Spaces decrease every row.

Formula:

```
Spaces = n - row
```

---

## Step 4 — Count Symbols

Example:

```
*
***
*****
```

Stars:

```
1

3

5
```

Formula:

```
2 × row - 1
```

---

## Step 5 — Find Relationship

Everything depends on:

- Row number
- Column number

The row number determines what should be printed.

---

## Step 6 — Write Loops

General structure:

```cpp
for(rows)
{
    for(spaces)
    {

    }

    for(symbols)
    {

    }
}
```

---

## Step 7 — Dry Run

Before compiling:

```
Take one row

↓

Calculate values

↓

Check output

↓

Repeat
```

---

# Categories of Pattern Problems

Pattern problems can be divided into different categories.

```
Pattern Problems

│

├── Square Patterns

├── Rectangle Patterns

├── Half Pyramid

├── Inverted Pyramid

├── Full Pyramid

├── Inverted Full Pyramid

├── Diamond

├── Hollow Patterns

├── Number Patterns

├── Alphabet Patterns

├── Character Patterns

├── Binary Patterns

├── Butterfly Patterns

├── Pascal Triangle

├── Floyd Triangle

├── Spiral Patterns

├── Matrix Patterns
```

---

# Category 1 — Square Patterns

Example:

```
*****
*****
*****
*****
*****
```

Observation:

Rows:

```
5
```

Columns:

```
5
```

Formula:

```
Columns = n
```

Code:

```cpp
for(int i = 1; i <= n; i++)
{
    for(int j = 1; j <= n; j++)
    {
        cout << "*";
    }

    cout << endl;
}
```

Time Complexity:

```
O(n²)
```

---

# Category 2 — Rectangle Pattern

Example:

```
******
******
******
```

Rows:

```
3
```

Columns:

```
6
```

---

# Category 3 — Half Pyramid

Example:

```
*
**
***
****
*****
```

Formula:

```
Stars = Row Number
```

Code:

```cpp
for(int i = 1; i <= n; i++)
{
    for(int j = 1; j <= i; j++)
    {
        cout << "*";
    }

    cout << endl;
}
```

---

# Category 4 — Inverted Half Pyramid

Example:

```
*****
****
***
**
*
```

Formula:

```
Stars = n - row + 1
```

---

# Category 5 — Right-Aligned Pyramid

Example:

```
    *
   **
  ***
 ****
*****
```

Formula:

```
Spaces = n - row

Stars = row
```

---

# Category 6 — Full Pyramid

Example:

```
    *
   ***
  *****
 *******
*********
```

Formula:

```
Spaces = n-row

Stars = 2×row-1
```

---

# Category 7 — Inverted Full Pyramid

Example:

```
*********
 *******
  *****
   ***
    *
```

Formula:

```
Spaces = row-1

Stars = 2×(n-row)+1
```

---

# Category 8 — Diamond Pattern

Example:

```
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
```

Think of it as:

```
Upper Pyramid

+

Lower Pyramid
```

---

# Category 9 — Hollow Square

Example:

```
*****
*   *
*   *
*   *
*****
```

Observation:

Print star only when:

```
First Row

Last Row

First Column

Last Column
```

Otherwise:

```
Print Space
```

Condition:

```cpp
if(i==1 || i==n || j==1 || j==n)
```

---

# Category 10 — Number Patterns

Example:

```
1
12
123
1234
```

Instead of stars:

```
Print column number
```

---

# Category 11 — Floyd's Triangle

Example:

```
1
2 3
4 5 6
7 8 9 10
```

Need:

```
One extra variable

count++
```

---

# Category 12 — Pascal Triangle

Each element:

```
nCr
```

Important for:

- Mathematics
- Dynamic Programming

---

# Category 13 — Binary Pattern

Example:

```
1
01
101
0101
```

Uses:

```
(row + column) % 2
```

---

# Category 14 — Alphabet Pattern

Example:

```
A
AB
ABC
ABCD
```

Formula:

```cpp
char('A'+j-1)
```

---

# Category 15 — Butterfly Pattern

Example:

```
*      *
**    **
***  ***
********
***  ***
**    **
*      *
```

Combination of:

- Stars
- Spaces

---

# Pattern Solving Formula Sheet

| Pattern | Formula |
|----------|----------|
| Square | n |
| Rectangle | rows × columns |
| Half Pyramid | row |
| Inverted Pyramid | n-row+1 |
| Full Pyramid | 2×row-1 |
| Inverted Full Pyramid | 2×(n-row)+1 |
| Spaces | n-row |
| Hollow Border | Boundary condition |

---

# Pattern Observation Tricks

Always ask:

### 1. How many rows?

Example:

```
5
```

---

### 2. How many columns?

```
5
```

---

### 3. What changes?

Rows?

Columns?

Spaces?

Stars?

Numbers?

---

### 4. Is there symmetry?

Example:

Diamond

Butterfly

Hourglass

---

### 5. Is there repetition?

Example:

```
*****
*****
*****
```

Same every row.

---

### 6. Is there growth?

Example:

```
*
**
***
```

Stars increase.

---

### 7. Is there reduction?

Example:

```
*****
****
***
```

Stars decrease.

---

# Common Mistakes

## Wrong Loop Limits

Wrong:

```cpp
j <= n
```

Correct:

Depends on pattern.

---

## Missing Newline

Wrong:

```cpp
for(...)
{
    cout<<"*";
}
```

Produces:

```
*************
```

Need:

```cpp
cout<<endl;
```

---

## Wrong Space Count

Most alignment errors come from incorrect spaces.

Always calculate separately.

---

## Confusing Row and Column

Outer Loop:

```
Rows
```

Inner Loop:

```
Columns
```

Never confuse them.

---

# Dry Run Example

Pattern:

```
*
**
***
```

Row 1

```
Stars =1
```

Row 2

```
Stars =2
```

Row 3

```
Stars =3
```

Logic verified.

---

# Time Complexity

Single Loop

```
O(n)
```

Nested Loop

```
O(n²)
```

Diamond

```
O(n²)
```

Butterfly

```
O(n²)
```

---

# Memory Complexity

Almost every pattern:

```
O(1)
```

Reason:

No extra memory is required.

---

# Best Practices

- Never memorize patterns.
- Observe before coding.
- Write formulas first.
- Dry run manually.
- Keep loops simple.
- Handle spaces separately.
- Use meaningful variable names.
- Practice regularly.

---

# Complete Learning Roadmap

```
Square

↓

Rectangle

↓

Half Pyramid

↓

Inverted Pyramid

↓

Right Pyramid

↓

Full Pyramid

↓

Diamond

↓

Hollow Patterns

↓

Number Patterns

↓

Alphabet Patterns

↓

Binary Patterns

↓

Butterfly

↓

Pascal Triangle

↓

Advanced Matrix Patterns
```

---

# Interview Perspective

Pattern questions are generally asked to evaluate:

- Logical thinking.
- Loop understanding.
- Observation skills.
- Problem decomposition.
- Ability to translate ideas into code.

The interviewer is more interested in **how you derive the solution** than whether you have seen the pattern before.

---

# Pattern Solving Checklist

Before writing code, ask yourself:

- How many rows are there?
- How many columns are printed in each row?
- Does the number of spaces change?
- Does the number of symbols increase or decrease?
- Can I express the pattern using a mathematical formula?
- Which loop controls rows?
- Which loop controls columns?
- What is the time complexity?

---

# Key Takeaways

- Pattern problems are exercises in logical thinking, not memorization.
- Every pattern can be broken into rows, columns, spaces, and symbols.
- The outer loop controls rows, while the inner loop controls columns.
- Most pattern problems are solved by identifying a simple mathematical relationship.
- Drawing the pattern on paper and analyzing one row at a time is often the fastest way to derive the algorithm.
- Mastering pattern problems builds a strong foundation for arrays, matrices, recursion, trees, graphs, and dynamic programming.

---

# Final Pattern Solving Workflow

```
Observe the Pattern

        ↓

Count Rows

        ↓

Count Columns

        ↓

Find Space Formula

        ↓

Find Symbol Formula

        ↓

Convert Observation into Mathematics

        ↓

Write Nested Loops

        ↓

Dry Run on Paper

        ↓

Implement in C++

        ↓

Test Edge Cases

        ↓

Analyze Time Complexity

        ↓

Optimize if Required
```

Pattern problems are the first step toward algorithmic thinking. Once you stop seeing them as "star printing" and start seeing them as "logic construction," they become one of the most valuable exercises in your DSA journey.