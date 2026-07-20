#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter 1 for Bitwise << and 2 for Bitwise >>: ";
    cin >> n;
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    switch (n)
    {
    case 1:
    {
        cout << (num1 << num2);
        break;
    }
    case 2:
    {
        cout << (num2 >> num2);
        break;
    }
    }
    return 0;
}

/*
EXPLANATION OF THE CODE:

1.  GOAL OF THE CODE:
    This program performs Bitwise Shift operations - Left Shift (<<) and Right Shift (>>)
    based on user's choice.

2.  INPUT SECTION:
    - n: Stores user's choice. 1 for Left Shift, 2 for Right Shift.
    - num1: The base number on which shifting will be done.
    - num2: The number of positions to shift. (How many bits to shift)

3.  switch STATEMENT:

    case 1: Bitwise Left Shift (<<)
      - Syntax: num1 << num2
      - Logic: Shifts all bits of num1 to the LEFT by num2 positions.
               Empty positions on the right are filled with 0.
               Mathematically: num1 << num2 is same as num1 * (2^num2)

        Example: 5 << 1
        5 = 0000 0101 (binary)
        Shift left by 1 -> 0000 1010 = 10
        So 5 << 1 = 10 which is 5 * 2^1 = 10

        Example: 5 << 2 = 20 (5 * 2^2 = 5 * 4)

      - Uses: Fast multiplication by power of 2.

    case 2: Bitwise Right Shift (>>)
      - Syntax: num1 >> num2 (But in your code you wrote num2 >> num2, which is a BUG)
      - Logic: Shifts all bits of num1 to the RIGHT by num2 positions.
               Mathematically: num1 >> num2 is same as num1 / (2^num2) (integer division)

        Example: 8 >> 1
        8 = 0000 1000
        Shift right by 1 -> 0000 0100 = 4
        So 8 >> 1 = 4 which is 8 / 2^1 = 4

        Example: 16 >> 2 = 4 (16 / 4 = 4)

      - Uses: Fast division by power of 2.

4.  FLOW OF PROGRAM:
    - User enters choice n
    - User enters num1 and num2
    - If n=1, it does num1 << num2
    - If n=2, it does num2 >> num2

5.  BUG / IMPORTANT CORRECTION:
    - In case 2 you wrote: cout << (num2 >> num2);
      This means you are shifting second number by itself. It should be:
      cout << (num1 >> num2);
      Example: If you enter num1=8, num2=1 and choose 2,
      Your code will do 1 >> 1 = 0 (Wrong)
      Correct should be 8 >> 1 = 4

    - Also, no default case is there. If user enters 3 or invalid choice, program does nothing.
      Add:
      default:
          cout << "Invalid choice";
          break;

    - For better readability, change output to:
      cout << "Result of Left Shift is: " << (num1 << num2);
*/