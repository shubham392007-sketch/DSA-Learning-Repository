# Variables and Data Types in C++

## Introduction

Variables and data types are the foundation of every C++ program.

Before solving Data Structures and Algorithms problems, it is essential to understand how data is stored, represented, and manipulated inside a computer.

Every program works with data:

- Numbers
- Characters
- Text
- Logical values
- Collections of values

To store this data, C++ provides **variables**.

A variable is a named memory location used to store a value.

Example:

```cpp
int age = 20;
```

Here:

- `int` → Data type
- `age` → Variable name
- `20` → Stored value

Memory representation:

```
Memory

+----------------+
| age = 20       |
+----------------+
```

---

# What is a Variable?

A variable is a container that stores data temporarily during program execution.

In C++, every variable has:

1. Name
2. Data type
3. Memory location
4. Value

Example:

```cpp
int marks = 95;
```

Explanation:

```
Data Type       Variable Name       Value

   int              marks             95
    |                 |                |
    ↓                 ↓                ↓

 Defines          Identifies       Stored data
 memory size      the variable
```

---

# Why Do We Need Variables?

Variables allow programs to:

- Store user input.
- Perform calculations.
- Maintain program state.
- Modify values during execution.
- Manage data structures.

Example:

Without variables:

```
Calculate 10 + 20
```

Only works for fixed values.

With variables:

```cpp
int a;
int b;

cin >> a;
cin >> b;

cout << a + b;
```

The same program works for any input.

---

# How Variables Are Stored in Memory

Every variable occupies some space in computer memory.

Example:

```cpp
int number = 100;
```

Memory:

```
Address        Value

1000           100
```

The variable name is used by the programmer, but internally the computer accesses the memory address.

---

# Variable Declaration

Declaration tells the compiler:

- Variable name.
- Data type.
- Required memory.

Syntax:

```cpp
data_type variable_name;
```

Example:

```cpp
int age;
```

Here:

```
int → Type
age → Variable name
```

---

# Variable Initialization

Initialization means assigning an initial value to a variable.

Example:

```cpp
int age = 20;
```

The variable is created and assigned a value simultaneously.

---

# Declaration vs Initialization

## Declaration

```cpp
int number;
```

Memory is allocated, but value is unknown.

---

## Initialization

```cpp
int number = 10;
```

Memory is allocated and value is stored.

---

# Assignment

Assignment means changing the value of an existing variable.

Example:

```cpp
int score = 50;

score = 100;
```

Initially:

```
score = 50
```

After assignment:

```
score = 100
```

---

# Types of Variable Initialization

C++ supports multiple initialization methods.

---

# 1. Copy Initialization

Traditional method.

```cpp
int age = 20;
```

---

# 2. Direct Initialization

Value is assigned using parentheses.

```cpp
int age(20);
```

---

# 3. Uniform Initialization

Modern C++ method.

```cpp
int age{20};
```

Advantages:

- Prevents narrowing conversion.
- Recommended in modern C++.

Example:

```cpp
int x{10};
```

---

# Variable Naming Rules in C++

Variable names must follow certain rules.

## Valid Rules

A variable name:

- Can contain letters.
- Can contain numbers.
- Can contain underscore.
- Cannot start with a number.
- Cannot contain spaces.
- Cannot use reserved keywords.

---

# Valid Variable Names

```cpp
age

studentName

total_marks

number1

_count
```

---

# Invalid Variable Names

```cpp
1number

student name

int

total-marks
```

---

# Naming Conventions

Good variable names improve readability.

---

## Camel Case

Common in C++.

Example:

```cpp
studentAge

totalMarks
```

---

## Snake Case

Also used.

Example:

```cpp
student_age

total_marks
```

---

# Bad Naming Practice

Avoid:

```cpp
int a;
int b;
int x;
```

unless the purpose is obvious.

Example:

Bad:

```cpp
int x;
```

Better:

```cpp
int totalStudents;
```

---

# Constants

A constant is a variable whose value cannot be changed after initialization.

Syntax:

```cpp
const data_type variable_name = value;
```

Example:

```cpp
const double PI = 3.14159;
```

Now:

```cpp
PI = 5;
```

will produce an error.

---

# Why Use Constants?

Constants provide:

- Safety.
- Readability.
- Prevention of accidental modification.

Example:

```cpp
const int DAYS_IN_WEEK = 7;
```

Better than:

```cpp
int x = 7;
```

---

# Data Types in C++

A data type defines:

- Type of data stored.
- Memory required.
- Range of values.
- Operations allowed.

Example:

```cpp
int age;
```

The compiler knows:

- age stores integer values.
- Required memory size.
- Valid operations.

---

# Classification of Data Types

C++ data types are divided into:

```
Data Types

|
|-- Primitive Data Types
|
|-- Derived Data Types
|
|-- User Defined Data Types
|
|-- Void Data Type
```

---

# Primitive Data Types

Primitive data types are basic built-in types provided by C++.

They include:

- Integer
- Floating point
- Character
- Boolean

---

# 1. Integer Data Type

Used to store whole numbers.

Example:

```cpp
int age = 21;
```

Stores:

```
-10
0
100
5000
```

Does not store decimal values.

Example:

```cpp
int price = 99.5;
```

The decimal part is removed.

---

# Integer Types

C++ provides different integer sizes.

| Type | Typical Size | Range |
|---|---|---|
| short | 2 bytes | -32,768 to 32,767 |
| int | 4 bytes | -2 billion to 2 billion |
| long | 4 or 8 bytes | Larger range |
| long long | 8 bytes | Very large integers |

---

# int

Most commonly used integer type.

Example:

```cpp
int population = 100000;
```

Used in:

- DSA problems.
- Counting.
- Indexing.

---

# long long

Used for very large numbers.

Example:

```cpp
long long distance = 1000000000000;
```

Common in DSA:

- Large constraints.
- Competitive programming.

Example:

```cpp
long long sum;
```

---

# 2. Floating Point Data Types

Used for decimal values.

Types:

- float
- double
- long double

---

# float

Stores decimal numbers.

Example:

```cpp
float price = 99.5;
```

Precision:

Approximately 7 digits.

---

# double

More precise floating-point type.

Example:

```cpp
double pi = 3.1415926535;
```

Precision:

Approximately 15 digits.

Recommended over float.

---

# long double

Provides higher precision.

Example:

```cpp
long double value;
```

---

# Float vs Double

| Feature | float | double |
|---|---|---|
| Memory | Less | More |
| Precision | Lower | Higher |
| Usage | Rare | Common |

For DSA:

Usually use:

```cpp
double
```

---

# 3. Character Data Type

Used to store a single character.

Example:

```cpp
char grade = 'A';
```

Stores:

```
A
b
5
@
```

Characters use single quotes.

Correct:

```cpp
char ch = 'A';
```

Incorrect:

```cpp
char ch = "A";
```

---

# Character Internally

Characters are stored using ASCII values.

Example:

```cpp
char ch = 'A';
```

ASCII:

```
A = 65
B = 66
a = 97
```

Example:

```cpp
cout << int('A');
```

Output:

```
65
```

---

# 4. Boolean Data Type

Used for logical values.

Only two possible values:

```
true

false
```

Example:

```cpp
bool isPassed = true;
```

Used in:

- Conditions.
- Searching.
- Flags.

Example:

```cpp
bool found = false;
```

---

# Size of Primitive Data Types

Sizes may depend on compiler and system.

Check size:

```cpp
sizeof(data_type);
```

Example:

```cpp
cout << sizeof(int);
```

Output:

```
4
```

---

# Type Modifiers in C++

Type modifiers change the size or range of data types.

Modifiers:

- signed
- unsigned
- short
- long

---

# Signed

Can store:

- Positive values.
- Negative values.

Example:

```cpp
signed int number;
```

Default for integers.

---

# Unsigned

Stores only positive values.

Example:

```cpp
unsigned int count;
```

Provides larger positive range.

---

# Short

Smaller integer storage.

Example:

```cpp
short int value;
```

---

# Long

Larger integer storage.

Example:

```cpp
long int population;
```

---

# Auto Keyword

C++ can automatically determine the data type.

Example:

```cpp
auto number = 10;
```

Compiler decides:

```
number → int
```

Example:

```cpp
auto price = 99.5;
```

Compiler decides:

```
price → double
```

---

# Type Conversion

Type conversion means changing one data type into another.

Two types:

1. Implicit conversion
2. Explicit conversion

---

# Implicit Conversion

Automatically done by compiler.

Example:

```cpp
int number = 10;

double value = number;
```

Conversion:

```
int → double
```

---

# Explicit Conversion

Done manually by programmer.

Example:

```cpp
double price = 99.99;

int value = (int)price;
```

Output:

```
99
```

Decimal part removed.

---

# Static Casting

Modern C++ conversion method.

Example:

```cpp
int value = static_cast<int>(99.99);
```

Recommended over C-style casting.

---

# Integer Overflow

Integer overflow occurs when a value exceeds the storage limit.

Example:

```cpp
int value = 2147483647;

value++;
```

Result:

Unexpected behavior.

---

# Handling Overflow in DSA

Use:

```cpp
long long
```

Example:

```cpp
long long sum = 0;
```

Common cases:

- Large array sums.
- Multiplication.
- Factorials.

---

# Scope of Variables

Scope defines where a variable can be accessed.

Types:

- Local variable.
- Global variable.

---

# Local Variable

Declared inside a function or block.

Example:

```cpp
int main()
{
    int age = 20;
}
```

Accessible only inside main.

---

# Global Variable

Declared outside all functions.

Example:

```cpp
int count = 0;

int main()
{

}
```

Accessible throughout the program.

---

# Local vs Global Variable

| Local | Global |
|-|-|
| Inside function | Outside functions |
| Limited access | Entire program access |
| Created during function execution | Exists throughout program |

---

# Static Variables

A static variable keeps its value between function calls.

Example:

```cpp
void counter()
{
    static int count = 0;

    count++;

    cout << count;
}
```

Calls:

```
1
2
3
```

---

# Variable Storage Classes

C++ provides storage classes:

- Automatic
- Register
- Static
- External

---

# Automatic Variables

Default local variables.

Example:

```cpp
int x;
```

Created when block starts.

---

# Register Variables

Stored in CPU register if possible.

Example:

```cpp
register int count;
```

Rarely used today.

---

# External Variables

Used to access variables from other files.

Keyword:

```cpp
extern
```

---

# Variables in DSA

Variables are heavily used in every DSA concept.

---

# Arrays

Example:

```cpp
int arr[5];
```

Stores multiple integers.

---

# Loop Variables

Example:

```cpp
for(int i = 0; i < n; i++)
{

}
```

`i` controls iteration.

---

# Counters

Example:

```cpp
int count = 0;
```

Used for:

- Frequency.
- Number of occurrences.

---

# Temporary Variables

Example:

```cpp
int temp = a;

a = b;

b = temp;
```

Used for swapping.

---

# Index Variables

Example:

```cpp
arr[index]
```

Used for accessing elements.

---

# Best Practices for Variables in DSA

## Use Appropriate Data Types

Wrong:

```cpp
int largeNumber;
```

Better:

```cpp
long long largeNumber;
```

---

## Initialize Variables

Avoid:

```cpp
int count;
```

Better:

```cpp
int count = 0;
```

---

## Use Meaningful Names

Bad:

```cpp
int x;
```

Good:

```cpp
int maxElement;
```

---

## Avoid Global Variables

Prefer local variables unless necessary.

---

# Common Beginner Mistakes

## Using Wrong Data Type

Example:

```cpp
int result = 100000000000;
```

Value exceeds int limit.

---

## Forgetting Initialization

Example:

```cpp
int sum;

sum += value;
```

Undefined behavior.

---

## Confusing Character and String

Character:

```cpp
char ch = 'A';
```

String:

```cpp
string name = "Alex";
```

---

## Integer Division Mistake

Example:

```cpp
int result = 5 / 2;
```

Output:

```
2
```

Because both values are integers.

Correct:

```cpp
double result = 5.0 / 2;
```

Output:

```
2.5
```

---

# Recommended Data Types for DSA

| Requirement | Recommended Type |
|---|---|
| Small integer | int |
| Large integer | long long |
| Decimal calculation | double |
| Character | char |
| True/False | bool |
| Dynamic collection | vector |

---

# Complete Example

```cpp
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int age = 20;

    long long population = 8000000000;

    double percentage = 95.5;

    char grade = 'A';

    bool passed = true;


    cout << age << endl;
    cout << population << endl;
    cout << percentage << endl;
    cout << grade << endl;
    cout << passed << endl;


    return 0;
}
```

---

# Key Takeaways

- Variables store data in memory.
- Every variable requires a data type.
- Data types determine memory size and allowed operations.
- Use `int` for normal integer values.
- Use `long long` for large calculations in DSA.
- Use `double` for decimal precision.
- Use `bool` for logical conditions.
- Proper variable naming improves code readability.
- Choosing the correct data type prevents errors and overflow.

---

# Final DSA Learning Flow

```
Problem Understanding

        ↓

Identify Required Data

        ↓

Choose Appropriate Data Types

        ↓

Create Variables

        ↓

Apply Algorithm Logic

        ↓

Optimize Memory Usage
```

Understanding variables and data types creates the foundation required for writing efficient C++ programs and solving complex Data Structures and Algorithms problems.