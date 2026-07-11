# Type Casting and Type Conversion in C++

## Introduction

In C++, every variable has a specific data type that determines:

- The kind of data it can store.
- The amount of memory it occupies.
- The operations that can be performed on it.

Sometimes, a program requires converting data from one data type to another.

Examples:

```cpp
int number = 10;

double value = number;
```

Here, an integer value is converted into a double value.

This process is called **Type Conversion**.

Type conversion and type casting are important concepts in C++ because they help:

- Perform calculations between different data types.
- Prevent data loss.
- Control how values are interpreted.
- Handle mathematical operations correctly.
- Solve DSA problems involving different numeric ranges.

---

# What is Type Conversion?

Type conversion is the process of converting a value from one data type to another automatically or manually.

Example:

```cpp
int number = 10;

double result = number;
```

The integer value:

```
10
```

is converted into:

```
10.0
```

The compiler performs this conversion automatically.

---

# Why Type Conversion is Needed?

Different operations require compatible data types.

Example:

```cpp
int a = 5;
double b = 2.5;

double result = a + b;
```

The computer cannot directly add different representations.

The compiler converts:

```
int

↓

double
```

Then performs:

```
5.0 + 2.5 = 7.5
```

---

# Type Conversion vs Type Casting

Although both involve changing data types, they are different.

| Type Conversion | Type Casting |
|---|---|
| Done automatically by compiler | Done manually by programmer |
| Usually safe | Can cause data loss |
| Happens implicitly | Happens explicitly |
| Used when conversion is compatible | Used when programmer forces conversion |

---

# Categories of Type Conversion in C++

C++ supports two major types:

```
Type Conversion

        |
        |
        ├── Implicit Type Conversion
        |
        └── Explicit Type Conversion (Type Casting)
```

---

# 1. Implicit Type Conversion

## Definition

Implicit type conversion is automatically performed by the compiler when converting one data type into another.

It is also called:

- Automatic conversion
- Type promotion

---

# Example

```cpp
#include <iostream>

using namespace std;

int main()
{
    int number = 10;

    double value = number;

    cout << value;

    return 0;
}
```

Output:

```
10
```

Internally:

```
int number

       ↓

double value
```

---

# Rules of Implicit Conversion

The compiler usually converts:

```
Smaller Data Type

        ↓

Larger Data Type
```

Example:

```
int → double
```

because double can store integer values.

---

# Data Type Promotion Order

Generally:

```
bool

 ↓

char

 ↓

short

 ↓

int

 ↓

long

 ↓

long long

 ↓

float

 ↓

double

 ↓

long double
```

A lower type is promoted to a higher type during operations.

---

# Example: Integer to Double Conversion

```cpp
#include <iostream>

using namespace std;

int main()
{
    int number = 25;

    double result = number;

    cout << result;

    return 0;
}
```

Output:

```
25
```

Memory representation:

```
Before:

25


After:

25.0
```

No data loss occurs.

---

# Example: Character to Integer Conversion

Characters have ASCII values.

Example:

```cpp
#include <iostream>

using namespace std;

int main()
{
    char ch = 'A';

    int value = ch;

    cout << value;

    return 0;
}
```

Output:

```
65
```

Conversion:

```
'A'

↓

65
```

---

# Example: Integer Promotion in Expressions

Example:

```cpp
int a = 10;

char b = 'A';

cout << a + b;
```

The character is converted:

```
'A'

↓

65
```

Calculation:

```
10 + 65 = 75
```

Output:

```
75
```

---

# 2. Explicit Type Conversion (Type Casting)

## Definition

Explicit type conversion is when the programmer manually converts one data type into another.

The programmer tells the compiler:

"Convert this value into this specific type."

---

# Syntax

Old C-style casting:

```cpp
(data_type)value;
```

Example:

```cpp
int x = (int)5.6;
```

---

Modern C++ casting:

```cpp
static_cast<data_type>(value);
```

Example:

```cpp
int x = static_cast<int>(5.6);
```

---

# Why Use Explicit Casting?

Explicit casting is used when:

- The programmer wants control.
- Automatic conversion is not performed.
- A specific result is required.

---

# Example: Double to Integer

```cpp
#include <iostream>

using namespace std;

int main()
{
    double price = 99.99;

    int value = (int)price;

    cout << value;

    return 0;
}
```

Output:

```
99
```

The decimal part is removed.

```
99.99

↓

99
```

---

# Data Loss During Type Casting

Some conversions lose information.

Example:

```cpp
double number = 10.75;

int value = (int)number;
```

Result:

```
10
```

Lost:

```
0.75
```

---

# Types of Explicit Casting in C++

C++ provides four casting operators:

1. static_cast
2. dynamic_cast
3. const_cast
4. reinterpret_cast

---

# 1. static_cast

## Definition

`static_cast` is the most commonly used casting method.

Used for:

- Numeric conversions.
- Related class conversions.
- Compile-time checked conversions.

---

## Syntax

```cpp
static_cast<data_type>(value);
```

---

## Example

```cpp
double number = 5.5;

int value = static_cast<int>(number);
```

Result:

```
5
```

---

# Why Prefer static_cast?

Compared to C-style casting:

```cpp
(int)value;
```

static_cast:

- More readable.
- Safer.
- Easier to identify.
- Checked by compiler.

---

# 2. dynamic_cast

## Definition

Used for safe conversion between related classes.

Mostly used in:

- Object-oriented programming.
- Inheritance.

Example:

```cpp
Derived* obj = dynamic_cast<Derived*>(base);
```

Requires:

- Polymorphism.
- Virtual functions.

Not commonly used in basic DSA.

---

# 3. const_cast

## Definition

Used to add or remove the const property of a variable.

Example:

```cpp
const int value = 10;

int* ptr = const_cast<int*>(&value);
```

Used rarely.

---

# 4. reinterpret_cast

## Definition

Used for low-level conversions.

It changes how the compiler interprets memory.

Example:

```cpp
int* ptr;

char* ch = reinterpret_cast<char*>(ptr);
```

Used in:

- System programming.
- Hardware programming.

Rare in DSA.

---

# Integer Division Problem

One of the most important type conversion concepts in DSA.

Example:

```cpp
int a = 5;
int b = 2;

cout << a / b;
```

Output:

```
2
```

Why?

Because:

```
int / int = int
```

The decimal part is removed.

---

# Correct Approach

Convert one value into double.

Example:

```cpp
int a = 5;
int b = 2;

double result = (double)a / b;

cout << result;
```

Output:

```
2.5
```

Modern C++:

```cpp
double result = static_cast<double>(a) / b;
```

---

# Type Casting in DSA

Type casting is frequently used in DSA problems.

---

# 1. Calculating Average

Incorrect:

```cpp
int average = sum / n;
```

Example:

```
sum = 5
n = 2
```

Result:

```
2
```

Correct:

```cpp
double average = (double)sum / n;
```

Result:

```
2.5
```

---

# 2. Binary Search Mid Calculation

Old approach:

```cpp
int mid = (low + high) / 2;
```

Potential overflow.

Better:

```cpp
int mid = low + (high - low) / 2;
```

No casting required.

---

# 3. Large Mathematical Operations

Example:

```cpp
long long result = (long long)a * b;
```

Why?

Because:

```cpp
int * int
```

may overflow before storing into long long.

Correct:

```cpp
long long result = 1LL * a * b;
```

---

# 4. Character Arithmetic

Example:

Convert lowercase character to uppercase.

```cpp
char ch = 'a';

char upper = ch - 'a' + 'A';
```

Character values are automatically converted to integers.

---

# Type Conversion in Expressions

When different data types appear in one expression, C++ follows conversion rules.

Example:

```cpp
int a = 10;

double b = 5.5;

double result = a + b;
```

Process:

```
a converted to double

10 → 10.0


10.0 + 5.5

=

15.5
```

---

# Usual Arithmetic Conversions

When performing operations:

Example:

```cpp
int + double
```

The smaller type converts to larger type.

Examples:

```
int + double

↓

double + double
```

```
float + long

↓

float + long converted appropriately
```

---

# Narrowing Conversion

Narrowing conversion happens when a larger data type is converted into a smaller one.

Example:

```cpp
double value = 99.99;

int number = value;
```

Data loss:

```
99.99

↓

99
```

---

# Preventing Narrowing Conversion

Modern C++ initialization detects narrowing.

Example:

```cpp
int number{99.99};
```

Compiler error.

This prevents accidental data loss.

---

# Boolean Conversion

Any non-zero value becomes:

```
true
```

Zero becomes:

```
false
```

Example:

```cpp
int value = 10;

bool result = value;
```

Result:

```
true
```

---

Example:

```cpp
int value = 0;

bool result = value;
```

Result:

```
false
```

---

# String Conversion

C++ provides conversion functions.

---

# String to Integer

Using:

```cpp
stoi()
```

Example:

```cpp
string number = "123";

int value = stoi(number);
```

Result:

```
123
```

---

# Integer to String

Using:

```cpp
to_string()
```

Example:

```cpp
int number = 100;

string value = to_string(number);
```

Result:

```
"100"
```

---

# Common Type Casting Mistakes

## 1. Forgetting Integer Division

Wrong:

```cpp
int result = 5 / 2;
```

Output:

```
2
```

Correct:

```cpp
double result = 5.0 / 2;
```

---

## 2. Losing Decimal Values

Wrong:

```cpp
int value = 9.8;
```

Result:

```
9
```

---

## 3. Overflow Before Conversion

Wrong:

```cpp
long long result = a * b;
```

If:

```cpp
a and b are int
```

calculation happens as int first.

Correct:

```cpp
long long result = 1LL * a * b;
```

---

## 4. Unnecessary Casting

Avoid:

```cpp
int x = static_cast<int>(10);
```

No conversion needed.

---

# Best Practices for Type Casting

## Prefer static_cast

Use:

```cpp
static_cast<int>(value);
```

instead of:

```cpp
(int)value;
```

---

## Cast Before Calculation

Wrong:

```cpp
double result = a / b;
```

Correct:

```cpp
double result = static_cast<double>(a) / b;
```

---

## Understand Data Loss

Before casting ask:

- Will precision be lost?
- Can overflow occur?
- Is the conversion necessary?

---

# Type Conversion Examples Summary

| Conversion | Result |
|---|---|
| int → double | Safe |
| char → int | ASCII value |
| double → int | Decimal removed |
| long long → int | Possible overflow |
| int → bool | 0=false, others=true |

---

# Complete Example Program

```cpp
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int integerValue = 10;

    double convertedValue = integerValue;

    cout << convertedValue << endl;


    double decimalValue = 15.75;

    int integerPart = static_cast<int>(decimalValue);

    cout << integerPart << endl;


    int a = 5;
    int b = 2;

    double division = static_cast<double>(a) / b;

    cout << division << endl;


    return 0;
}
```

Output:

```
10
15
2.5
```

---

# Key Takeaways

- Type conversion changes one data type into another.
- Implicit conversion is performed automatically by the compiler.
- Explicit conversion is controlled by the programmer.
- Type casting can cause data loss.
- `static_cast` is the preferred C++ casting method.
- Integer division is a common source of DSA bugs.
- Always choose appropriate data types before conversion.
- Type casting is essential for accurate calculations and optimized solutions.

---

# Final DSA Workflow with Type Handling

```
Understand Problem

        ↓

Identify Required Data

        ↓

Choose Correct Data Types

        ↓

Check Possible Conversions

        ↓

Apply Necessary Casting

        ↓

Implement Algorithm

        ↓

Test Edge Cases

        ↓

Optimize Solution
```

Understanding type conversion and type casting helps write safer, faster, and more reliable C++ programs for Data Structures and Algorithms.