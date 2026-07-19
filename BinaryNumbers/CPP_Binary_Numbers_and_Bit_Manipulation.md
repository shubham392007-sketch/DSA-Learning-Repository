# Binary Numbers in C++ – Complete Guide

> A comprehensive guide to Binary Numbers in C++, covering binary fundamentals, number systems, binary arithmetic, bitwise operations, binary literals, conversions, memory representation, two's complement, bit manipulation techniques, STL bitset, and interview concepts.

---

# Table of Contents

1. Introduction to Binary Numbers
2. What is a Number System?
3. Types of Number Systems
4. Decimal Number System
5. Binary Number System
6. Why Computers Use Binary
7. Binary Digits (Bits)
8. Bytes and Memory Units
9. Place Values in Binary
10. Decimal to Binary Conversion
11. Binary to Decimal Conversion
12. Binary Arithmetic
13. Binary Addition
14. Binary Subtraction
15. Binary Multiplication
16. Binary Division
17. Binary Numbers in C++
18. Binary Literals
19. Printing Binary Numbers
20. Binary to Decimal in C++
21. Decimal to Binary in C++
22. std::bitset
23. Bitwise Operators
24. Left Shift Operator
25. Right Shift Operator
26. Two's Complement
27. Signed vs Unsigned Numbers
28. Binary Representation in Memory
29. Endianness
30. Common Bit Manipulation Techniques
31. Applications of Binary
32. Time Complexity of Bit Operations
33. Common Mistakes
34. Interview Questions
35. Summary

---

# 1. Introduction to Binary Numbers

A **binary number** is a number represented using only two digits:

```
0
1
```

Unlike the decimal system (Base 10), binary uses **Base 2**.

Every computer, mobile phone, calculator, smartwatch, game console, and embedded system internally stores and processes information in binary form.

Example:

```
Decimal : 13

Binary : 1101
```

---

# 2. What is a Number System?

A number system is a method of representing numbers using a fixed set of symbols.

Different number systems use different bases.

Example

| Number System | Base | Digits |
|--------------|------|--------|
| Decimal | 10 | 0–9 |
| Binary | 2 | 0–1 |
| Octal | 8 | 0–7 |
| Hexadecimal | 16 | 0–9, A–F |

---

# 3. Types of Number Systems

## Decimal

Base 10

```
583
```

---

## Binary

Base 2

```
101101
```

---

## Octal

Base 8

```
765
```

---

## Hexadecimal

Base 16

```
2AF
```

---

# 4. Decimal Number System

Uses ten digits.

```
0 1 2 3 4 5 6 7 8 9
```

Example

```
583

=

5×100

+

8×10

+

3×1
```

---

# 5. Binary Number System

Uses only

```
0
1
```

Example

```
1011
```

Means

```
1×2³

+

0×2²

+

1×2¹

+

1×2⁰
```

---

# 6. Why Computers Use Binary

Electronic devices have only two stable states.

```
OFF
ON
```

or

```
LOW Voltage
HIGH Voltage
```

Represented as

```
0
1
```

Binary is reliable, easy to implement, resistant to noise, and forms the basis of digital electronics.

---

# 7. Binary Digits (Bits)

A binary digit is called a **bit**.

```
0

or

1
```

Only two possible values.

---

# 8. Bytes and Memory Units

| Unit | Size |
|------|------|
| 1 Bit | 0 or 1 |
| 1 Byte | 8 Bits |
| 1 KB | 1024 Bytes |
| 1 MB | 1024 KB |
| 1 GB | 1024 MB |
| 1 TB | 1024 GB |

Example

```
01010101
```

contains 8 bits

=

1 Byte

---

# 9. Place Values in Binary

```
Binary

1 0 1 1 0 1

↓

32 16 8 4 2 1
```

Every position is a power of 2.

| Position | Value |
|----------|-------|
| 2⁰ | 1 |
| 2¹ | 2 |
| 2² | 4 |
| 2³ | 8 |
| 2⁴ | 16 |
| 2⁵ | 32 |
| 2⁶ | 64 |
| 2⁷ | 128 |

---

# 10. Decimal to Binary Conversion

Method

Repeatedly divide by 2.

Example

Convert

```
25
```

```
25 /2 =12 remainder 1

12 /2 =6 remainder 0

6 /2 =3 remainder 0

3 /2 =1 remainder 1

1 /2 =0 remainder 1
```

Read from bottom

```
11001
```

Therefore

```
25

=

11001₂
```

---

# 11. Binary to Decimal Conversion

Example

```
10101
```

```
1×16

+

0×8

+

1×4

+

0×2

+

1×1

=

21
```

---

# 12. Binary Arithmetic

Binary supports

- Addition
- Subtraction
- Multiplication
- Division

Exactly like decimal arithmetic.

---

# 13. Binary Addition

Rules

```
0+0 =0

0+1 =1

1+0 =1

1+1 =10

1+1+1 =11
```

Example

```
 1010

+0011

------

1101
```

---

# 14. Binary Subtraction

Rules

```
1-0=1

1-1=0

0-0=0
```

Borrow when needed.

---

# 15. Binary Multiplication

Example

```
101

×

11

=

1111
```

Works similarly to decimal multiplication.

---

# 16. Binary Division

Binary division also follows the same long-division concept used in decimal arithmetic.

---

# 17. Binary Numbers in C++

C++ primarily uses **decimal literals**, but binary values can be represented in several ways.

Example

```cpp
int x = 13;
```

Internally stored as

```
1101
```

---

# 18. Binary Literals (C++14 and Later)

C++14 introduced binary literals.

Syntax

```cpp
0b1010
```

Example

```cpp
#include<iostream>
using namespace std;

int main()
{
    int x = 0b1010;

    cout << x;
}
```

Output

```
10
```

More examples

```cpp
int a = 0b1;
int b = 0b10;
int c = 0b1111;
```

---

# 19. Printing Binary Numbers

C++ has no direct stream manipulator for binary output.

Common approaches:

- Use `std::bitset`
- Write a conversion function
- Use bitwise operations

Example using `bitset`

```cpp
#include<iostream>
#include<bitset>
using namespace std;

int main()
{
    int n = 10;

    cout << bitset<8>(n);
}
```

Output

```
00001010
```

---

# 20. Binary to Decimal in C++

```cpp
#include<iostream>
using namespace std;

int binaryToDecimal(int binary)
{
    int decimal = 0;
    int base = 1;

    while(binary > 0)
    {
        int lastDigit = binary % 10;

        decimal += lastDigit * base;

        base *= 2;

        binary /= 10;
    }

    return decimal;
}

int main()
{
    cout << binaryToDecimal(10101);
}
```

Output

```
21
```

---

# 21. Decimal to Binary in C++

```cpp
#include<iostream>
using namespace std;

void decimalToBinary(int n)
{
    if(n == 0)
    {
        cout << 0;
        return;
    }

    string ans = "";

    while(n > 0)
    {
        ans = char((n % 2) + '0') + ans;
        n /= 2;
    }

    cout << ans;
}

int main()
{
    decimalToBinary(25);
}
```

Output

```
11001
```

---

# 22. std::bitset

`bitset` is an STL container that stores bits efficiently and provides many useful operations.

Example

```cpp
#include<iostream>
#include<bitset>
using namespace std;

int main()
{
    bitset<8> b(10);

    cout << b;
}
```

Output

```
00001010
```

Access individual bits

```cpp
cout << b[0];
```

Count set bits

```cpp
cout << b.count();
```

Check if any bit is set

```cpp
cout << b.any();
```

Flip all bits

```cpp
b.flip();
```

Reset all bits

```cpp
b.reset();
```

Set all bits

```cpp
b.set();
```

---

# 23. Bitwise Operators

| Operator | Meaning |
|----------|---------|
| & | AND |
| \| | OR |
| ^ | XOR |
| ~ | NOT |
| << | Left Shift |
| >> | Right Shift |

---

# Bitwise AND

```cpp
5 & 3
```

Binary

```
0101

0011

----

0001
```

Result

```
1
```

---

# Bitwise OR

```cpp
5 | 3
```

```
0101

0011

----

0111
```

Result

```
7
```

---

# Bitwise XOR

```cpp
5 ^ 3
```

```
0101

0011

----

0110
```

Result

```
6
```

XOR truth table

| A | B | A ^ B |
|---|---|-------|
|0|0|0|
|0|1|1|
|1|0|1|
|1|1|0|

---

# Bitwise NOT

```cpp
~5
```

Flips every bit.

---

# 24. Left Shift Operator

Syntax

```cpp
x << n
```

Shifts bits left by `n` positions.

Example

```cpp
5 << 1
```

```
0101

↓

1010
```

Result

```
10
```

For positive integers, shifting left by one position is equivalent to multiplying by 2.

---

# 25. Right Shift Operator

Syntax

```cpp
x >> n
```

Example

```cpp
20 >> 2
```

```
10100

↓

00101
```

Result

```
5
```

For positive integers, shifting right by one position is equivalent to dividing by 2 (integer division).

---

# 26. Two's Complement

Computers store negative integers using **two's complement**.

Steps to find `-5` (8-bit)

1. Binary of 5

```
00000101
```

2. Invert bits

```
11111010
```

3. Add 1

```
11111011
```

This is the binary representation of `-5`.

Advantages

- Single representation for zero.
- Simplifies addition and subtraction.
- Widely used in modern processors.

---

# 27. Signed vs Unsigned Numbers

## Signed

Can represent both positive and negative values.

```cpp
int x = -10;
```

---

## Unsigned

Represents only non-negative values.

```cpp
unsigned int x = 20;
```

A 32-bit unsigned integer ranges from:

```
0

to

4294967295
```

---

# 28. Binary Representation in Memory

Example

```cpp
char x = 65;
```

Memory

```
01000001
```

Character

```
A
```

---

Example

```cpp
int x = 5;
```

32-bit representation

```
00000000

00000000

00000000

00000101
```

---

# 29. Endianness

Endianness determines the order in which bytes are stored in memory.

## Little Endian

Least significant byte is stored first.

Used by most Intel and AMD processors.

---

## Big Endian

Most significant byte is stored first.

Used in some networking protocols and certain processors.

---

# 30. Common Bit Manipulation Techniques

## Check if Number is Even

```cpp
if((n & 1) == 0)
```

---

## Check if Number is Odd

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

## Check kth Bit

```cpp
(n >> k) & 1
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

## Count Set Bits

Using Brian Kernighan's Algorithm

```cpp
int count = 0;

while(n)
{
    n = n & (n - 1);
    count++;
}
```

Time Complexity

```
O(number of set bits)
```

---

## Check Power of Two

```cpp
if(n > 0 && (n & (n - 1)) == 0)
```

---

## Swap Two Numbers without Temporary Variable

```cpp
a ^= b;
b ^= a;
a ^= b;
```

Note: Although valid, using `std::swap()` is generally preferred for readability and safety.

---

# 31. Applications of Binary

Binary numbers and bit manipulation are widely used in:

- Operating Systems
- Compilers
- Embedded Systems
- Device Drivers
- Networking
- Cryptography
- Image Processing
- Audio and Video Compression
- Databases
- Artificial Intelligence
- Machine Learning
- Competitive Programming
- Data Structures
- Computer Graphics
- Robotics
- Microcontrollers
- IoT Devices
- Game Development

---

# 32. Time Complexity of Bit Operations

| Operation | Complexity |
|-----------|------------|
| AND | O(1) |
| OR | O(1) |
| XOR | O(1) |
| NOT | O(1) |
| Left Shift | O(1) |
| Right Shift | O(1) |
| Set Bit | O(1) |
| Clear Bit | O(1) |
| Toggle Bit | O(1) |
| Check Bit | O(1) |

Bitwise operations are among the fastest operations available because they are directly supported by the CPU.

---

# 33. Common Mistakes

### Confusing Binary Literals with Decimal Numbers

```cpp
int x = 1010;
```

This is **decimal 1010**, not binary.

Correct

```cpp
int x = 0b1010;
```

---

### Assuming `cout` Prints Binary

```cpp
cout << 0b1010;
```

Output

```
10
```

`cout` prints the decimal value unless you explicitly convert or use `std::bitset`.

---

### Using Signed Values in Bitwise Operations Without Understanding Two's Complement

Negative numbers are represented using two's complement, which can produce unexpected results if you are unfamiliar with the representation.

---

### Forgetting Operator Precedence

```cpp
if(n & 1 == 0)
```

Incorrect because `==` has higher precedence than `&`.

Correct

```cpp
if((n & 1) == 0)
```

---

### Shifting Beyond the Width of the Type

Shifting a value by an amount greater than or equal to the number of bits in its type results in undefined behavior.

---

# 34. Interview Questions

### Q1. Why do computers use binary?

Because digital hardware has two stable states, making binary reliable and efficient.

---

### Q2. What is a bit?

A bit is the smallest unit of information and can store either `0` or `1`.

---

### Q3. What is a byte?

A byte consists of **8 bits**.

---

### Q4. How do you represent binary literals in C++?

Using the `0b` prefix.

Example

```cpp
int x = 0b1101;
```

---

### Q5. What is the difference between `<<` and `>>`?

- `<<` shifts bits to the left.
- `>>` shifts bits to the right.

---

### Q6. How do you check whether a number is even using bitwise operators?

```cpp
(n & 1) == 0
```

---

### Q7. What is XOR commonly used for?

- Toggling bits
- Finding a unique element
- Swapping values (historically)
- Detecting differences

---

### Q8. What is two's complement?

A method used by computers to represent signed integers, especially negative values.

---

### Q9. What is `std::bitset`?

An STL class template for storing and manipulating a fixed-size sequence of bits.

---

### Q10. Why are bitwise operations fast?

Because they are executed directly by the processor using simple hardware instructions.

---

# 35. Summary

- Binary is a **Base-2** number system that uses only `0` and `1`.
- Computers store and process all data internally in binary.
- A **bit** is the smallest unit of data, and **8 bits make one byte**.
- C++ supports **binary literals** using the `0b` prefix (since C++14).
- `std::bitset` provides an easy way to store, display, and manipulate binary values.
- Bitwise operators (`&`, `|`, `^`, `~`, `<<`, `>>`) are fundamental for low-level programming.
- Left and right shift operators are useful for efficient multiplication, division, and bit manipulation.
- Negative integers are stored using **two's complement**.
- Understanding binary representation is essential for memory management, embedded systems, operating systems, networking, cryptography, graphics, competitive programming, and high-performance software development.
- Mastering binary numbers and bit manipulation forms the foundation for advanced topics such as data structures, algorithms, digital electronics, computer architecture, and systems programming.

---