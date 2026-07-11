# Operators in C++

## Introduction

Operators are one of the most fundamental concepts in C++ programming.

An operator is a symbol or keyword that performs an operation on one or more values or variables.

Examples:

```cpp
int a = 10;
int b = 20;

int sum = a + b;
```

Here:

```
+  → Operator

a,b → Operands

a + b → Expression
```

Operators allow programmers to perform:

- Mathematical calculations.
- Comparisons.
- Logical decisions.
- Memory operations.
- Data manipulation.
- Bit-level operations.

Operators are heavily used in Data Structures and Algorithms for:

- Loop conditions.
- Searching.
- Sorting.
- Mathematical calculations.
- Bit manipulation.
- Conditional logic.

---

# Basic Terminology

Every operation consists of:

```
Operator + Operand(s) = Expression
```

Example:

```cpp
a + b
```

Components:

```
a      → Operand

+      → Operator

b      → Operand
```

---

# Types of Operators in C++

C++ provides many categories of operators.

```
Operators

|
|-- Arithmetic Operators
|
|-- Relational Operators
|
|-- Logical Operators
|
|-- Assignment Operators
|
|-- Increment and Decrement Operators
|
|-- Bitwise Operators
|
|-- Conditional Operator
|
|-- Special Operators
|
|-- Member Access Operators
|
|-- Size Operator
|
|-- Type Casting Operators
```

---

# 1. Arithmetic Operators

Arithmetic operators are used to perform mathematical operations.

Operators:

| Operator | Meaning |
|---|---|
| + | Addition |
| - | Subtraction |
| * | Multiplication |
| / | Division |
| % | Modulus |

---

# Addition Operator (+)

Used to add two values.

Example:

```cpp
int a = 10;
int b = 20;

int result = a + b;
```

Output:

```
30
```

---

# Subtraction Operator (-)

Used to subtract values.

Example:

```cpp
int difference = 20 - 10;
```

Output:

```
10
```

---

# Multiplication Operator (*)

Used for multiplication.

Example:

```cpp
int product = 5 * 4;
```

Output:

```
20
```

---

# Division Operator (/)

Used for division.

Example:

```cpp
int result = 10 / 2;
```

Output:

```
5
```

---

# Integer Division

When both operands are integers:

```cpp
int result = 5 / 2;
```

Output:

```
2
```

Reason:

```
5 / 2 = 2.5

Decimal part removed
```

---

# Floating Point Division

Example:

```cpp
double result = 5.0 / 2;
```

Output:

```
2.5
```

---

# Modulus Operator (%)

Returns remainder after division.

Example:

```cpp
int remainder = 10 % 3;
```

Calculation:

```
10 ÷ 3

Quotient = 3

Remainder = 1
```

Output:

```
1
```

---

# Applications of Modulus in DSA

## Checking Even and Odd Numbers

Even:

```cpp
number % 2 == 0
```

Odd:

```cpp
number % 2 != 0
```

---

## Extracting Digits

Example:

Number:

```
123
```

Last digit:

```cpp
123 % 10
```

Output:

```
3
```

---

## Circular Arrays

Used for:

- Circular queues.
- Rotation problems.

Example:

```cpp
index = (index + 1) % n;
```

---

# 2. Relational Operators

Relational operators compare two values.

Result is always:

```
true

or

false
```

Operators:

| Operator | Meaning |
|---|---|
| == | Equal to |
| != | Not equal |
| > | Greater than |
| < | Less than |
| >= | Greater or equal |
| <= | Less or equal |

---

# Equal To (==)

Checks whether values are equal.

Example:

```cpp
int a = 10;

cout << (a == 10);
```

Output:

```
1
```

In C++:

```
true = 1

false = 0
```

---

# Not Equal (!=)

Checks whether values are different.

Example:

```cpp
a != b
```

---

# Greater Than (>)

Example:

```cpp
10 > 5
```

Result:

```
true
```

---

# Less Than (<)

Example:

```cpp
5 < 10
```

Result:

```
true
```

---

# Greater Than or Equal (>=)

Example:

```cpp
age >= 18
```

Used for:

- Eligibility checks.
- Constraints.

---

# Less Than or Equal (<=)

Example:

```cpp
marks <= 100
```

---

# Relational Operators in DSA

Used in:

- Binary search.
- Sorting conditions.
- Loop termination.
- Comparisons.

Example:

```cpp
while(left <= right)
{

}
```

---

# 3. Logical Operators

Logical operators combine multiple conditions.

Operators:

| Operator | Meaning |
|---|---|
| && | Logical AND |
| || | Logical OR |
| ! | Logical NOT |

---

# Logical AND (&&)

Returns true only when all conditions are true.

Truth table:

| A | B | A && B |
|-|-|-|
| true | true | true |
| true | false | false |
| false | true | false |
| false | false | false |

Example:

```cpp
age >= 18 && age <= 60
```

Means:

```
Age should be between 18 and 60
```

---

# Logical OR (||)

Returns true if at least one condition is true.

Truth table:

| A | B | A || B |
|-|-|-|
| true | true | true |
| true | false | true |
| false | true | true |
| false | false | false |

Example:

```cpp
day == "Saturday" || day == "Sunday"
```

---

# Logical NOT (!)

Reverses the condition.

Example:

```cpp
bool result = true;

cout << !result;
```

Output:

```
false
```

---

# Short Circuit Evaluation

C++ stops evaluating logical expressions when the result is already known.

---

## AND Short Circuit

Example:

```cpp
if(false && function())
{

}
```

Second condition is not checked.

---

## OR Short Circuit

Example:

```cpp
if(true || function())
{

}
```

Second condition is ignored.

---

# 4. Assignment Operators

Assignment operators assign values to variables.

Basic operator:

```
=
```

---

# Simple Assignment

Example:

```cpp
int x = 10;
```

Stores:

```
x = 10
```

---

# Compound Assignment Operators

These combine operation and assignment.

| Operator | Example | Meaning |
|---|---|---|
| += | a += b | a = a+b |
| -= | a -= b | a = a-b |
| *= | a *= b | a = a*b |
| /= | a /= b | a = a/b |
| %= | a %= b | a = a%b |

---

# Addition Assignment

```cpp
int x = 10;

x += 5;
```

Equivalent:

```cpp
x = x + 5;
```

Result:

```
15
```

---

# Multiplication Assignment

```cpp
x *= 2;
```

Equivalent:

```cpp
x = x * 2;
```

---

# Applications in DSA

Used for:

- Updating counters.
- Prefix sums.
- Dynamic programming.

Example:

```cpp
sum += arr[i];
```

---

# 5. Increment and Decrement Operators

Used to increase or decrease values by one.

Operators:

```
++

--
```

---

# Increment Operator (++)

Example:

```cpp
int count = 5;

count++;
```

Result:

```
6
```

---

# Decrement Operator (--)

Example:

```cpp
count--;
```

Result:

```
4
```

---

# Types of Increment

Two types:

1. Pre-increment
2. Post-increment

---

# Pre Increment (++x)

Value increases first.

Example:

```cpp
int x = 5;

int y = ++x;
```

Execution:

```
x becomes 6

y gets 6
```

---

# Post Increment (x++)

Value is used first, then increased.

Example:

```cpp
int x = 5;

int y = x++;
```

Execution:

```
y gets 5

x becomes 6
```

---

# Pre vs Post Increment

| Pre Increment | Post Increment |
|-|-|
| Increment first | Use first |
| Faster in some cases | Creates temporary copy |
| ++x | x++ |

For primitive data types, difference is usually negligible.

---

# 6. Bitwise Operators

Bitwise operators work directly on binary representation of numbers.

Operators:

| Operator | Meaning |
|---|---|
| & | Bitwise AND |
| | | Bitwise OR |
| ^ | Bitwise XOR |
| ~ | Bitwise NOT |
| << | Left Shift |
| >> | Right Shift |

---

# Binary Representation Example

Number:

```
5
```

Binary:

```
0101
```

---

# Bitwise AND (&)

Compares bits.

Rule:

```
1 & 1 = 1

otherwise = 0
```

Example:

```
5 = 0101

3 = 0011

---------

1 = 0001
```

Code:

```cpp
5 & 3
```

Output:

```
1
```

---

# Bitwise OR (|)

Rule:

```
0 | 0 = 0

otherwise = 1
```

Example:

```
5 | 3

0101
0011

0111

=7
```

---

# Bitwise XOR (^)

Rule:

```
Same bits = 0

Different bits = 1
```

Example:

```
5 ^ 3

0101
0011

0110

=6
```

---

# Bitwise NOT (~)

Flips all bits.

Example:

```cpp
~5
```

---

# Left Shift (<<)

Moves bits left.

Example:

```cpp
5 << 1
```

Binary:

```
0101

↓

1010
```

Result:

```
10
```

Equivalent:

```
multiply by 2
```

---

# Right Shift (>>)

Moves bits right.

Example:

```cpp
8 >> 1
```

Result:

```
4
```

Equivalent:

```
divide by 2
```

---

# Bitwise Operators in DSA

Used in:

- Bit manipulation.
- XOR problems.
- Power calculations.
- Optimization.

Example:

Check odd/even:

```cpp
if(n & 1)
{
    cout<<"Odd";
}
```

---

# 7. Conditional Operator (Ternary Operator)

The ternary operator is a short form of if-else.

Syntax:

```cpp
condition ? expression1 : expression2;
```

---

# Example

```cpp
int age = 20;

string result = (age >= 18) ? "Adult" : "Minor";
```

Equivalent:

```cpp
if(age >= 18)
{
    result="Adult";
}
else
{
    result="Minor";
}
```

---

# Ternary Operator in DSA

Commonly used for:

- Maximum/minimum.
- Simple conditions.
- Assignments.

Example:

```cpp
int maximum = (a > b) ? a : b;
```

---

# 8. sizeof Operator

Returns memory size occupied by a data type or variable.

Syntax:

```cpp
sizeof(variable);
```

Example:

```cpp
int x;

cout << sizeof(x);
```

Output:

```
4
```

---

# Applications

Used for:

- Memory analysis.
- Understanding data structures.

Example:

```cpp
sizeof(arr)
```

---

# 9. Comma Operator

Allows multiple expressions in one statement.

Example:

```cpp
int a = (5,10);
```

Result:

```
a = 10
```

The last expression value is returned.

---

# 10. Member Access Operators

Used with objects and structures.

Operators:

```
.

->
```

---

# Dot Operator (.)

Used to access object members.

Example:

```cpp
student.name;
```

---

# Arrow Operator (->)

Used with pointers.

Example:

```cpp
ptr->name;
```

---

# 11. Address and Pointer Operators

Used in memory operations.

Operators:

| Operator | Meaning |
|-|-|
| & | Address of |
| * | Dereference |

---

# Address Operator (&)

Returns memory address.

Example:

```cpp
int x = 10;

cout << &x;
```

---

# Dereference Operator (*)

Access value stored at address.

Example:

```cpp
int* ptr = &x;

cout << *ptr;
```

Output:

```
10
```

---

# 12. Scope Resolution Operator (::)

Used to access global variables and class members.

Example:

```cpp
std::cout
```

Here:

```
::

Scope resolution operator
```

---

# Operator Precedence

Operator precedence determines the order in which operations are performed.

Example:

```cpp
int result = 10 + 5 * 2;
```

Multiplication happens first:

```
5 * 2 = 10

10 + 10 = 20
```

---

# Common Precedence Order

Highest:

```
()

++

--

*

/

%

+

-

< >

== !=

&&

||

=

```

---

# Using Parentheses

Parentheses override precedence.

Example:

```cpp
(10 + 5) * 2
```

Calculation:

```
15 * 2

=30
```

---

# Operator Associativity

Associativity decides evaluation direction when precedence is same.

---

Example:

Addition:

```cpp
a + b + c
```

Evaluated:

```
(a+b)+c
```

Left to right.

---

Assignment:

```cpp
a = b = c;
```

Evaluated:

```
a = (b = c)
```

Right to left.

---

# Operators Used in DSA Examples

## Loop Condition

```cpp
for(int i=0; i<n; i++)
```

Operators:

```
=

<

++
```

---

## Binary Search

```cpp
if(arr[mid] == target)
```

Operators:

```
==

+
/

```

---

## Sliding Window

```cpp
sum += arr[right];
```

Operator:

```
+=
```

---

## Bit Manipulation

```cpp
number & 1
```

Operator:

```
&
```

---

# Common Operator Mistakes

## Assignment vs Equality

Wrong:

```cpp
if(a = 5)
```

Correct:

```cpp
if(a == 5)
```

---

## Integer Division

Wrong:

```cpp
double result = 5/2;
```

Output:

```
2
```

Correct:

```cpp
double result = 5.0/2;
```

---

## Operator Precedence Mistake

Wrong:

```cpp
a + b * c
```

Expected:

```
(a+b)*c
```

Actual:

```
a+(b*c)
```

---

## Confusing Bitwise and Logical Operators

Logical:

```cpp
&&
||
```

Bitwise:

```cpp
&
|
```

---

# Best Practices

- Use parentheses for complex expressions.
- Avoid unnecessary operator chaining.
- Understand precedence.
- Prefer readability over clever expressions.
- Be careful with integer division.
- Use bitwise operators only when required.

---

# Complete Operator Example

```cpp
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a = 10;
    int b = 5;


    cout << a + b << endl;

    cout << (a > b) << endl;

    cout << (a && b) << endl;


    a += b;

    cout << a << endl;


    int maximum = (a > b) ? a : b;

    cout << maximum;


    return 0;
}
```

---

# Key Takeaways

- Operators perform operations on data.
- Arithmetic operators handle calculations.
- Relational operators compare values.
- Logical operators combine conditions.
- Assignment operators modify values.
- Increment/decrement simplify counting operations.
- Bitwise operators work at binary level.
- Ternary operators provide short conditional expressions.
- Understanding precedence prevents logical errors.
- Operators are the building blocks of DSA implementations.

---

# Final DSA Problem Solving Flow

```
Understand Problem

        ↓

Identify Required Operations

        ↓

Choose Appropriate Operators

        ↓

Write Algorithm

        ↓

Implement Solution

        ↓

Analyze Complexity

        ↓

Optimize
```

A strong understanding of operators allows programmers to write efficient, accurate, and optimized C++ solutions for Data Structures and Algorithms.