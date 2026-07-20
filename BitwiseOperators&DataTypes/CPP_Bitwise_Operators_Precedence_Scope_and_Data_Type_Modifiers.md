# Bitwise Operators, Operator Precedence, Associativity, Scope, and Data Type Modifiers in C++ – Complete Guide

> A comprehensive guide covering Bitwise Operators, Operator Precedence, Rules of Associativity, Local Scope, Global Scope, Data Type Modifiers, memory representation, practical examples, interview concepts, and best practices.

---

# Table of Contents

1. Introduction
2. Operators in C++
3. Types of Operators
4. Bitwise Operators
5. Binary Representation
6. Bitwise AND (&)
7. Bitwise OR (|)
8. Bitwise XOR (^)
9. Bitwise NOT (~)
10. Left Shift (<<)
11. Right Shift (>>)
12. Practical Applications of Bitwise Operators
13. Common Bit Manipulation Tricks
14. Operator Precedence
15. Complete Operator Precedence Table
16. Associativity
17. Rules of Associativity
18. Examples of Precedence and Associativity
19. Local Scope
20. Global Scope
21. Scope Resolution Operator (::)
22. Variable Lifetime
23. Data Type Modifiers
24. Signed and Unsigned Types
25. Integer Data Types with Modifiers
26. Memory Representation
27. Best Practices
28. Common Mistakes
29. Interview Questions
30. Summary

---

# 1. Introduction

C++ provides many operators that perform different tasks such as arithmetic calculations, logical comparisons, memory manipulation, and bit-level operations.

Understanding how operators work, how expressions are evaluated, how variables are scoped, and how data types can be modified is essential for writing efficient and bug-free programs.

---

# 2. Operators in C++

An **operator** is a symbol that performs an operation on one or more operands.

Example

```cpp
a + b
```

- `+` → Operator
- `a`, `b` → Operands

---

# 3. Types of Operators

| Operator Type | Examples |
|--------------|----------|
| Arithmetic | `+`, `-`, `*`, `/`, `%` |
| Relational | `==`, `!=`, `<`, `>`, `<=`, `>=` |
| Logical | `&&`, `||`, `!` |
| Assignment | `=`, `+=`, `-=`, `*=`, `/=` |
| Increment/Decrement | `++`, `--` |
| Bitwise | `&`, `|`, `^`, `~`, `<<`, `>>` |
| Conditional | `?:` |
| Size | `sizeof` |
| Pointer | `*`, `&` |
| Scope Resolution | `::` |

---

# 4. Bitwise Operators

Bitwise operators work directly on the binary representation of integers.

They operate bit by bit.

Example

```
Decimal

5 = 0101

3 = 0011
```

---

# 5. Binary Representation

```
Decimal 13

↓

Binary

1101
```

Computers internally perform bitwise operations using binary digits (bits).

---

# 6. Bitwise AND (&)

### Syntax

```cpp
a & b
```

Rule

```
1 & 1 = 1

1 & 0 = 0

0 & 1 = 0

0 & 0 = 0
```

Example

```cpp
#include<iostream>
using namespace std;

int main()
{
    cout << (5 & 3);
}
```

Binary

```
5 = 0101

3 = 0011

-----------

    0001
```

Output

```
1
```

Applications

- Masking bits
- Checking flags
- Even/Odd checking

---

# 7. Bitwise OR (|)

### Syntax

```cpp
a | b
```

Rule

```
1 | 1 = 1

1 | 0 = 1

0 | 1 = 1

0 | 0 = 0
```

Example

```
0101

0011

-----

0111
```

Output

```
7
```

Applications

- Setting bits
- Combining flags

---

# 8. Bitwise XOR (^)

### Syntax

```cpp
a ^ b
```

Truth Table

| A | B | A ^ B |
|---|---|-------|
|0|0|0|
|0|1|1|
|1|0|1|
|1|1|0|

Example

```
0101

0011

-----

0110
```

Output

```
6
```

Applications

- Swapping numbers
- Finding unique element
- Encryption
- Toggle bits

---

# 9. Bitwise NOT (~)

Flips every bit.

Example

```cpp
~5
```

Binary (8-bit illustration)

```
00000101

↓

11111010
```

For signed integers, the result depends on two's complement representation.

Example

```cpp
cout << ~5;
```

Output

```
-6
```

Explanation

```
~x = -(x + 1)
```

for two's complement systems.

---

# 10. Left Shift (<<)

### Syntax

```cpp
a << n
```

Moves bits to the left.

Example

```
5 << 1

0101

↓

1010
```

Output

```
10
```

Equivalent (for positive integers)

```
a × 2ⁿ
```

Example

```cpp
cout << (8 << 2);
```

Output

```
32
```

---

# 11. Right Shift (>>)

Moves bits to the right.

Example

```
20 >> 2

10100

↓

00101
```

Output

```
5
```

Equivalent (for positive integers)

```
a ÷ 2ⁿ
```

---

# 12. Practical Applications of Bitwise Operators

## Check Even Number

```cpp
if((n & 1) == 0)
```

---

## Check Odd Number

```cpp
if(n & 1)
```

---

## Multiply by 2

```cpp
n << 1
```

---

## Divide by 2

```cpp
n >> 1
```

---

## Set kth Bit

```cpp
n | (1 << k)
```

---

## Clear kth Bit

```cpp
n & ~(1 << k)
```

---

## Toggle kth Bit

```cpp
n ^ (1 << k)
```

---

## Check kth Bit

```cpp
(n >> k) & 1
```

---

## Count Set Bits

```cpp
int count = 0;

while(n)
{
    n = n & (n - 1);
    count++;
}
```

---

## Check Power of Two

```cpp
if(n > 0 && (n & (n - 1)) == 0)
```

---

# 13. Common Bit Manipulation Tricks

### Turn Off Rightmost Set Bit

```cpp
n = n & (n - 1);
```

---

### Isolate Rightmost Set Bit

```cpp
n & (-n)
```

---

### Set Rightmost Unset Bit

```cpp
n | (n + 1)
```

---

### Toggle All Bits

```cpp
~n
```

---

# 14. Operator Precedence

When an expression contains multiple operators, C++ follows **precedence** rules to determine which operator is evaluated first.

Example

```cpp
2 + 3 * 4
```

Multiplication has higher precedence.

```
2 + 12

↓

14
```

---

# 15. Complete Operator Precedence Table

| Precedence | Operators | Associativity |
|------------|-----------|---------------|
| Highest | `()` `[]` `->` `.` | Left to Right |
| | `++` `--` (Postfix) | Left to Right |
| | `++` `--` `!` `~` `+` `-` `*` `&` `sizeof` | Right to Left |
| | `*` `/` `%` | Left to Right |
| | `+` `-` | Left to Right |
| | `<<` `>>` | Left to Right |
| | `<` `<=` `>` `>=` | Left to Right |
| | `==` `!=` | Left to Right |
| | `&` | Left to Right |
| | `^` | Left to Right |
| | `|` | Left to Right |
| | `&&` | Left to Right |
| | `||` | Left to Right |
| | `?:` | Right to Left |
| | `=` `+=` `-=` `*=` `/=` `%=` | Right to Left |
| Lowest | `,` | Left to Right |

---

# 16. Associativity

Associativity decides the evaluation order when operators have the **same precedence**.

---

# 17. Rules of Associativity

## Left to Right

Example

```cpp
20 / 5 / 2
```

Evaluation

```
20 / 5

↓

4 / 2

↓

2
```

---

## Right to Left

Assignment

```cpp
a = b = c = 10;
```

Evaluation

```
c = 10

↓

b = 10

↓

a = 10
```

---

# 18. Examples of Precedence and Associativity

Example 1

```cpp
5 + 2 * 3
```

Output

```
11
```

---

Example 2

```cpp
8 >> 1 + 1
```

Evaluation

```
1 + 1

↓

8 >> 2

↓

2
```

---

Example 3

```cpp
10 - 5 - 2
```

Evaluation

```
10 - 5

↓

5 - 2

↓

3
```

---

Example 4

```cpp
a = b = 5;
```

Assignment is right to left.

---

# 19. Local Scope

A variable declared inside a block or function has **local scope**.

Example

```cpp
#include<iostream>
using namespace std;

void fun()
{
    int x = 10;

    cout << x;
}
```

`x` exists only inside `fun()`.

---

Example

```cpp
int main()
{
    int a = 5;

    {
        int b = 10;
    }

    cout << b;
}
```

Compiler Error

`b` is out of scope.

---

# 20. Global Scope

Variables declared outside every function have **global scope**.

Example

```cpp
#include<iostream>
using namespace std;

int x = 100;

void display()
{
    cout << x;
}

int main()
{
    display();
}
```

Output

```
100
```

Global variables exist for the entire duration of the program.

---

# 21. Scope Resolution Operator (::)

Used to access a global variable when a local variable has the same name.

Example

```cpp
#include<iostream>
using namespace std;

int x = 50;

int main()
{
    int x = 10;

    cout << x << endl;

    cout << ::x;
}
```

Output

```
10

50
```

---

# 22. Variable Lifetime

## Local Variable

Created when the function begins.

Destroyed when the function ends.

Stored in **stack memory**.

---

## Global Variable

Created before `main()` starts.

Destroyed after the program ends.

Stored in the data segment.

---

## Static Local Variable

```cpp
void fun()
{
    static int count = 0;
    count++;
}
```

Created only once.

Retains its value between function calls.

Destroyed when the program terminates.

---

# 23. Data Type Modifiers

Modifiers change the size or range of fundamental data types.

The four standard modifiers are:

- `signed`
- `unsigned`
- `short`
- `long`

---

# 24. Signed and Unsigned Types

## Signed

Stores positive and negative numbers.

```cpp
signed int x = -20;
```

---

## Unsigned

Stores only non-negative numbers.

```cpp
unsigned int x = 100;
```

Typical 32-bit range

```
0

to

4294967295
```

---

# 25. Integer Data Types with Modifiers

## short

```cpp
short int x;
```

Typically 2 bytes.

Typical range

```
-32768

to

32767
```

---

## unsigned short

```cpp
unsigned short int x;
```

Typical range

```
0

to

65535
```

---

## int

```cpp
int x;
```

Typically 4 bytes on modern systems.

Typical range

```
-2,147,483,648

to

2,147,483,647
```

---

## unsigned int

```cpp
unsigned int x;
```

Typical range

```
0

to

4,294,967,295
```

---

## long

```cpp
long int x;
```

Size depends on the platform (commonly 4 or 8 bytes).

---

## unsigned long

```cpp
unsigned long int x;
```

Non-negative values only.

---

## long long

```cpp
long long int x;
```

Typically 8 bytes.

Typical range

```
−9,223,372,036,854,775,808

to

9,223,372,036,854,775,807
```

---

## unsigned long long

```cpp
unsigned long long int x;
```

Typical range

```
0

to

18,446,744,073,709,551,615
```

---

# 26. Memory Representation

Approximate sizes (implementation-dependent)

| Data Type | Typical Size |
|-----------|--------------|
| char | 1 Byte |
| short | 2 Bytes |
| int | 4 Bytes |
| long | 4 or 8 Bytes |
| long long | 8 Bytes |
| float | 4 Bytes |
| double | 8 Bytes |
| long double | 8, 12, or 16 Bytes (platform-dependent) |

Check sizes using

```cpp
sizeof(type)
```

Example

```cpp
cout << sizeof(int);
```

---

# 27. Best Practices

- Use parentheses to make operator precedence explicit.
- Prefer local variables over global variables whenever possible.
- Avoid unnecessary global state to reduce coupling.
- Use `const` for values that should not change.
- Use `unsigned` only when non-negative values are guaranteed and appropriate.
- Choose the smallest suitable integer type only when memory constraints justify it.
- Use meaningful variable names rather than relying on scope tricks.
- Be careful when mixing signed and unsigned integers, as implicit conversions can produce unexpected results.

---

# 28. Common Mistakes

## Forgetting Operator Precedence

Incorrect

```cpp
if(n & 1 == 0)
```

Correct

```cpp
if((n & 1) == 0)
```

---

## Modifying Global Variables Unnecessarily

```cpp
int count = 0;
```

Changing global variables from multiple functions can make programs difficult to debug.

---

## Assuming `long` Has the Same Size Everywhere

The size of `long` depends on the compiler and operating system.

---

## Using Bitwise Operators Instead of Logical Operators

Incorrect

```cpp
if(a & b)
```

when the intention is a logical AND.

Correct

```cpp
if(a && b)
```

---

## Ignoring Integer Promotion Rules

Operations on small integer types (`char`, `short`) are often promoted to `int` before evaluation.

---

# 29. Interview Questions

### Q1. What is the difference between bitwise AND (`&`) and logical AND (`&&`)?

- `&` works on individual bits.
- `&&` works on boolean expressions and short-circuits.

---

### Q2. Which operator is used to toggle a bit?

```
^
```

(XOR)

---

### Q3. What is operator precedence?

The priority that determines which operator is evaluated first in an expression.

---

### Q4. What is associativity?

The rule that determines the order of evaluation when operators have the same precedence.

---

### Q5. What is local scope?

A variable declared inside a block or function that is accessible only within that block.

---

### Q6. What is global scope?

A variable declared outside all functions that can be accessed throughout the program (subject to visibility rules).

---

### Q7. What is the purpose of the scope resolution operator (`::`)?

To access global variables or class members explicitly.

---

### Q8. Name the four standard data type modifiers in C++.

- `signed`
- `unsigned`
- `short`
- `long`

---

### Q9. How do you check if a number is a power of two?

```cpp
n > 0 && (n & (n - 1)) == 0
```

---

### Q10. Why are bitwise operations fast?

Because they map directly to CPU instructions and operate at the bit level.

---

# 30. Summary

- **Bitwise operators** manipulate individual bits and are fundamental in systems programming, embedded systems, networking, graphics, and competitive programming.
- The six primary bitwise operators are `&`, `|`, `^`, `~`, `<<`, and `>>`.
- **Operator precedence** determines which operation is performed first, while **associativity** determines evaluation order when operators have equal precedence.
- Parentheses improve readability and prevent precedence-related bugs.
- **Local scope** restricts variables to the block or function in which they are declared, while **global scope** allows program-wide access.
- The **scope resolution operator (`::`)** accesses global variables or explicitly qualified names.
- **Data type modifiers** (`signed`, `unsigned`, `short`, `long`) alter the range and, in some cases, the size of fundamental integer types.
- Understanding operator behavior, variable scope, and data type modifiers is essential for writing correct, efficient, and maintainable C++ programs.
- These concepts provide the foundation for advanced topics such as data structures, algorithms, object-oriented programming, embedded systems, operating systems, compiler design, and low-level software development.

---