#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the a to choose: 1 for Bitwise &  2 for Bitwise | and 3 for Bitwise ^:  ";
    cin >> n;
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number:";
    cin >> num2;

    switch (n)
    {
    case 1:
    {
        cout << (num1 & num2);
        break;
    }
    case 2:
    {
        cout << (num1 | num2);
        break;
    }
    case 3:
    {
        cout << (num1 ^ num2);
        break;
    }
    }

    return 0;
}

/*
EXPLANATION OF THE CODE:

1.  GOAL OF THE CODE:
    This program performs Bitwise operations (AND, OR, XOR) on two numbers
    based on the user's choice.

2.  INPUT SECTION:
    - n: Stores the user's choice (1, 2, or 3).
    - num1, num2: The two numbers on which bitwise operation will be performed.
    - The program asks for choice first, then asks for the two numbers.

3.  switch STATEMENT:
    switch(n) checks the value of n and executes the matching case.

    case 1: Bitwise AND (&)
      - Syntax: num1 & num2
      - Logic: Compares binary of both numbers bit by bit. Result bit is 1 only if BOTH bits are 1.
        Example: 5 & 3
        5 = 0101
        3 = 0011

        & = 0001 = 1
      - Uses: Masking, turning OFF bits.

    case 2: Bitwise OR (|)
      - Syntax: num1 | num2
      - Logic: Result bit is 1 if ATLEAST ONE of the bits is 1.
        Example: 5 | 3
        5 = 0101
        3 = 0011

        | = 0111 = 7
      - Uses: Turning ON bits.

    case 3: Bitwise XOR (^) - Exclusive OR
      - Syntax: num1 ^ num2
      - Logic: Result bit is 1 only if BOTH bits are DIFFERENT.
        Example: 5 ^ 3
        5 = 0101
        3 = 0011

        ^ = 0110 = 6
      - Uses: Toggling bits, simple encryption, swapping without temp variable.

    - break; is used in each case to stop and exit from switch, otherwise it would
      fall through to the next case.

4.  FLOW OF PROGRAM:
    - User enters choice n (e.g., 1)
    - User enters num1 (e.g., 5) and num2 (e.g., 3)
    - switch goes to case 1 and executes cout << (5 & 3) -> prints 1.

5.  LIMITATIONS / IMPROVEMENTS NEEDED:
    - No default case: If user enters 4 or any invalid number, program will do nothing.
      You should add:
      default:
          cout << "Invalid choice";
          break;
    - The output message is not descriptive. Instead of just cout << (num1 & num2);
      Better to write cout << "Result of Bitwise AND is: " << (num1 & num2);
*/