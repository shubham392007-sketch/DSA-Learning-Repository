# Conditional Statements in C++

## Introduction

Conditional statements are one of the most important concepts in programming.

A program does not always execute every instruction sequentially. In real-world problems, programs need to make decisions based on certain conditions.

Conditional statements allow a program to:

- Make decisions.
- Execute specific blocks of code.
- Control the flow of execution.
- Handle different situations.
- Implement logical thinking.

Example:

```cpp
if(age >= 18)
{
    cout << "Eligible";
}
```

Here, the program checks a condition:

```
Is age greater than or equal to 18?

        |
        |
       Yes

        ↓

Execute the code
```

---

# Why Conditional Statements Are Important in DSA

Conditional statements are used in almost every Data Structures and Algorithms problem.

Examples:

## Searching

Checking whether an element exists:

```cpp
if(arr[i] == target)
{
    return i;
}
```

---

## Sorting

Comparing two values:

```cpp
if(a > b)
{
    swap(a,b);
}
```

---

## Binary Search

Decision making:

```cpp
if(arr[mid] == target)
{
    return mid;
}
```

---

## Graph Algorithms

Checking visited nodes:

```cpp
if(!visited[node])
{
    dfs(node);
}
```

---

# Decision Making in Programming

The general flow:

```
Start

 ↓

Check Condition

 ↓

Condition True?

 ↓              ↓

Yes            No

 ↓              ↓

Execute       Skip/Alternative
Block         Block

 ↓

Continue Program
```

---

# What is a Condition?

A condition is an expression that produces either:

```
true

or

false
```

Example:

```cpp
age >= 18
```

Possible results:

```
age = 20

20 >= 18

true
```

or:

```
age = 15

15 >= 18

false
```

---

# Boolean Values in C++

C++ represents conditions using boolean values.

Two values:

```cpp
true

false
```

Internally:

```
true  → 1

false → 0
```

Example:

```cpp
bool result = (10 > 5);

cout << result;
```

Output:

```
1
```

---

# Types of Conditional Statements in C++

C++ provides different decision-making statements:

```
Conditional Statements

        |
        |
        ├── if Statement
        |
        ├── if-else Statement
        |
        ├── else-if Ladder
        |
        ├── Nested if Statement
        |
        ├── switch Statement
        |
        └── Ternary Operator
```

---

# 1. if Statement

## Definition

The `if` statement executes a block of code only when a condition is true.

Syntax:

```cpp
if(condition)
{
    // code
}
```

---

# Flowchart of if Statement

```
        Start

          |

     Check Condition

          |

      Condition True?

       /        \

     Yes         No

      |           |

 Execute       Skip

 Code

      |

     End
```

---

# Example

```cpp
#include <iostream>

using namespace std;

int main()
{
    int age = 20;

    if(age >= 18)
    {
        cout << "Adult";
    }

    return 0;
}
```

Output:

```
Adult
```

---

# How if Statement Works

Step 1:

Variable created:

```
age = 20
```

Step 2:

Condition checked:

```
age >= 18
```

Step 3:

Evaluation:

```
20 >= 18

true
```

Step 4:

Code executes:

```
Adult
```

---

# if Statement Without Braces

C++ allows single statements without braces.

Example:

```cpp
if(age >= 18)
    cout << "Adult";
```

However, braces are recommended because they:

- Improve readability.
- Prevent mistakes.
- Make code easier to modify.

---

# 2. if-else Statement

## Definition

The if-else statement executes one block when the condition is true and another block when the condition is false.

Syntax:

```cpp
if(condition)
{
    // true block
}
else
{
    // false block
}
```

---

# Flowchart

```
          Start

            |

      Check Condition

            |

       True?

       /    \

     Yes     No

      |       |

 True Block  False Block

      \       /

          End
```

---

# Example

```cpp
int number = 10;

if(number % 2 == 0)
{
    cout << "Even";
}
else
{
    cout << "Odd";
}
```

Output:

```
Even
```

---

# Working

Condition:

```cpp
number % 2 == 0
```

Calculation:

```
10 % 2 = 0
```

Condition:

```
true
```

Execute:

```
Even
```

---

# 3. else-if Ladder

## Definition

When multiple conditions need to be checked, use else-if ladder.

Syntax:

```cpp
if(condition1)
{

}
else if(condition2)
{

}
else if(condition3)
{

}
else
{

}
```

---

# Flowchart

```
Condition 1?

   |

Yes → Execute Block

   |

No

   ↓

Condition 2?

   |

Yes → Execute Block

   |

No

   ↓

Condition 3?

   |

Yes → Execute Block

   |

No

   ↓

Else Block
```

---

# Example

```cpp
int marks = 85;

if(marks >= 90)
{
    cout << "Grade A";
}
else if(marks >= 75)
{
    cout << "Grade B";
}
else if(marks >= 50)
{
    cout << "Grade C";
}
else
{
    cout << "Fail";
}
```

Output:

```
Grade B
```

---

# Order of Conditions in else-if

Order matters.

Wrong:

```cpp
if(marks >= 50)
{
    Grade C
}
else if(marks >= 90)
{
    Grade A
}
```

For:

```
marks = 95
```

First condition is true.

Output:

```
Grade C
```

Correct order:

```cpp
if(marks >= 90)

else if(marks >= 50)
```

Always check specific conditions first.

---

# 4. Nested if Statement

## Definition

An if statement inside another if statement is called nested if.

Syntax:

```cpp
if(condition1)
{
    if(condition2)
    {

    }
}
```

---

# Example

```cpp
int age = 20;
bool license = true;


if(age >= 18)
{
    if(license == true)
    {
        cout << "Can drive";
    }
}
```

Output:

```
Can drive
```

---

# Nested if Flow

```
Check First Condition

        |

      True

        |

Check Second Condition

        |

      True

        |

Execute Code
```

---

# Nested if in DSA

Example:

Checking valid array access:

```cpp
if(index >= 0)
{
    if(index < n)
    {
        cout << arr[index];
    }
}
```

---

# 5. switch Statement

## Definition

The switch statement is used when one variable needs to be compared against multiple fixed values.

Syntax:

```cpp
switch(expression)
{
    case value1:
        // code
        break;

    case value2:
        // code
        break;

    default:
        // code
}
```

---

# Example

```cpp
int day = 3;

switch(day)
{
    case 1:
        cout << "Monday";
        break;

    case 2:
        cout << "Tuesday";
        break;

    case 3:
        cout << "Wednesday";
        break;

    default:
        cout << "Invalid day";
}
```

Output:

```
Wednesday
```

---

# How switch Works

Expression:

```cpp
day
```

Value:

```
3
```

Matches:

```
case 3
```

Executes:

```
Wednesday
```

---

# Importance of break in switch

Without break:

```cpp
switch(day)
{
    case 1:
        cout<<"Monday";

    case 2:
        cout<<"Tuesday";
}
```

Execution continues to next cases.

This is called:

```
Fall-through
```

---

# default Case

The default block executes when no case matches.

Example:

```cpp
default:
    cout<<"Invalid Input";
```

It works like the final else statement.

---

# switch vs if-else

| switch | if-else |
|-|-|
| Fixed values | Complex conditions |
| Faster for many choices | More flexible |
| Uses cases | Uses expressions |
| Cannot check ranges | Can check ranges |

---

# When to Use switch

Use switch for:

- Menu programs.
- Days.
- Months.
- Fixed options.

Example:

```cpp
Choose:

1. Add
2. Delete
3. Exit
```

---

# When to Use if-else

Use if-else for:

- Range checking.
- Complex conditions.
- Logical comparisons.

Example:

```cpp
if(age >= 18 && age <= 60)
```

---

# 6. Ternary Operator

The ternary operator is a short form of if-else.

Syntax:

```cpp
condition ? true_value : false_value;
```

---

# Example

```cpp
int a = 10;
int b = 20;

int maximum = (a > b) ? a : b;
```

Equivalent:

```cpp
if(a > b)
{
    maximum = a;
}
else
{
    maximum = b;
}
```

---

# Nested Ternary Operator

Example:

```cpp
int result = (a>b) ? a :
             (b>c) ? b : c;
```

Avoid excessive nesting because readability decreases.

---

# Conditions Using Logical Operators

Multiple conditions can be combined.

---

# AND Operator

Both conditions must be true.

Example:

```cpp
if(age >= 18 && age <= 60)
{
    cout<<"Eligible";
}
```

---

# OR Operator

At least one condition must be true.

Example:

```cpp
if(day=="Saturday" || day=="Sunday")
{
    cout<<"Weekend";
}
```

---

# NOT Operator

Reverses condition.

Example:

```cpp
if(!isVisited)
{
    visit();
}
```

---

# Conditional Statements and Loops

Conditional statements are frequently used inside loops.

Example:

```cpp
for(int i=0;i<n;i++)
{
    if(arr[i] == target)
    {
        cout<<"Found";
    }
}
```

---

# Conditional Statements in Arrays

Example:

Finding maximum element:

```cpp
int maximum = arr[0];

for(int i=1;i<n;i++)
{
    if(arr[i] > maximum)
    {
        maximum = arr[i];
    }
}
```

---

# Conditional Statements in Searching

Linear Search:

```cpp
if(arr[i] == target)
{
    return i;
}
```

---

# Conditional Statements in Sorting

Bubble Sort:

```cpp
if(arr[j] > arr[j+1])
{
    swap(arr[j], arr[j+1]);
}
```

---

# Conditional Statements in Recursion

Example:

Base condition:

```cpp
if(n == 0)
{
    return;
}
```

Without conditions, recursion can become infinite.

---

# Short Circuit Evaluation

C++ evaluates logical expressions intelligently.

Example:

```cpp
if(false && function())
{
}
```

The function will not execute.

Reason:

```
false && anything = false
```

---

# Common Mistakes in Conditional Statements

## 1. Using Assignment Instead of Comparison

Wrong:

```cpp
if(x = 10)
```

Correct:

```cpp
if(x == 10)
```

---

# 2. Missing Braces

Problem:

```cpp
if(condition)
    statement1;
    statement2;
```

Only statement1 belongs to if.

Correct:

```cpp
if(condition)
{
    statement1;
    statement2;
}
```

---

# 3. Wrong Condition Order

Example:

```cpp
if(score >= 50)
{
    Pass;
}
else if(score >= 90)
{
    Excellent;
}
```

The second condition never executes.

---

# 4. Infinite Logic Errors

Example:

```cpp
if(true)
{
    cout<<"Hello";
}
```

Condition always executes.

---

# Best Practices

## Keep Conditions Simple

Avoid:

```cpp
if(a>b && c>d && x<y && ...)
```

Break complex logic into smaller parts.

---

## Use Meaningful Variables

Bad:

```cpp
if(x)
```

Better:

```cpp
if(isValid)
```

---

## Use Braces Always

Recommended:

```cpp
if(condition)
{

}
```

---

## Avoid Deep Nesting

Instead of:

```cpp
if()
{
    if()
    {
        if()
        {

        }
    }
}
```

Use:

- Functions.
- Early returns.
- Cleaner logic.

---

# Complete Example Program

```cpp
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int marks;

    cin >> marks;


    if(marks >= 90)
    {
        cout << "Excellent";
    }
    else if(marks >= 75)
    {
        cout << "Very Good";
    }
    else if(marks >= 50)
    {
        cout << "Pass";
    }
    else
    {
        cout << "Fail";
    }


    return 0;
}
```

---

# Conditional Statements in Problem Solving

Before writing conditions:

1. Understand the problem.
2. Identify possible cases.
3. Define conditions.
4. Handle edge cases.
5. Implement logic.

Example:

Problem:

```
Find whether number is positive, negative, or zero.
```

Logic:

```
number > 0

Positive


number < 0

Negative


otherwise

Zero
```

Implementation:

```cpp
if(number > 0)
{
    cout<<"Positive";
}
else if(number < 0)
{
    cout<<"Negative";
}
else
{
    cout<<"Zero";
}
```

---

# Key Takeaways

- Conditional statements control program execution flow.
- Conditions always evaluate to true or false.
- `if` executes code when a condition is true.
- `if-else` handles two possible outcomes.
- `else-if` handles multiple conditions.
- Nested if handles dependent decisions.
- `switch` handles fixed multiple choices.
- Ternary operator provides compact conditional expressions.
- Logical operators help combine conditions.
- Conditional statements are essential in every DSA algorithm.

---

# Final DSA Problem Solving Flow

```
Understand Problem

        ↓

Identify Possible Cases

        ↓

Create Conditions

        ↓

Handle Edge Cases

        ↓

Implement Logic

        ↓

Test Different Inputs

        ↓

Optimize Solution
```

Conditional statements form the decision-making foundation of programming and are required for building efficient algorithms and solving complex DSA problems.