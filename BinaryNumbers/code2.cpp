// Binary to decimal number
#include <iostream>
using namespace std;
void DecimalNumber(int num)
{
    int ans = 0;
    int power = 1;
    int remainder = 0;

    while (num > 0)
    {
        remainder = num % 10;
        num = num / 10;
        ans += remainder * power;
        power = power * 2;
    }
    cout << "The the decimal number of the provided binary number is: " << ans;
}

int main()
{
    int n;
    cout << "Enter the binary number to get its decimal form: ";
    cin >> n;
    DecimalNumber(n);
    return 0;
}

/*
EXPLANATION OF THE CODE:

1.  GOAL OF THE CODE:
    This program converts a Binary number (like 1010) entered by the user 
    into its Decimal form (like 10).

2.  HEADER AND NAMESPACE:
    #include <iostream> -> For using cin and cout.
    using namespace std; -> Avoids writing std:: every time.

3.  FUNCTION DecimalNumber(int num):
    This function contains the conversion logic from binary to decimal.

    Variables used:
    - ans: To store the final decimal result. Starts at 0.
    - power: To store the power of 2. Binary is based on powers of 2 (1, 2, 4, 8, 16...).
             Starts at 1 which is 2^0.
    - remainder: To store the last digit of the binary number (0 or 1).

    Logic:
    - while (num > 0) loop runs until all digits of the binary number are processed.
    - Inside loop:
      a) remainder = num % 10 -> Extracts the last digit of the number.
         Example: If num=1010, remainder = 0.
      b) num = num / 10 -> Removes the last digit.
         Example: 1010 / 10 = 101.
      c) ans += remainder * power -> This is the main formula: decimal = sum of (binary_digit * 2^position)
         If remainder is 1, we add the current power of 2 to ans. If 0, we add nothing.
      d) power = power * 2 -> Updates power for next position.
         Sequence will be 1, 2, 4, 8, 16...

    - Finally it prints ans.

4.  main() FUNCTION:
    - Takes input n from the user (user must enter a number consisting of only 0s and 1s).
    - Calls DecimalNumber(n) to convert and print it.

5.  HOW IT WORKS - DRY RUN (Example for n = 1011):
    Binary 1011 should be decimal 11 (8+0+2+1).
    Initial: ans=0, power=1 (2^0)
    Iteration 1: num=1011, remainder=1011%10=1, num=101, ans=0+1*1=1, power=2
    Iteration 2: num=101, remainder=101%10=1, num=10, ans=1+1*2=3, power=4
    Iteration 3: num=10, remainder=10%10=0, num=1, ans=3+0*4=3, power=8
    Iteration 4: num=1, remainder=1%10=1, num=0, ans=3+1*8=11, power=16
    Loop stops as num=0. Output is 11.

6.  LIMITATIONS / NOTE:
    - This code assumes the user will only enter 0 and 1. If user enters 2, 3, etc.
      like 1021, it will still calculate but the result will be wrong. You can add validation.
    - It takes binary as an int, so for very long binary numbers it may overflow.
      Using string input is a safer method for large binaries.
*/