//Number to Binary
#include <iostream>
using namespace std;

int BinaryNumber(int num)
{
    int remainder = 0;
    int ans = 0;
    int power = 1;

    while (num > 0)
    {
        remainder = num % 2;
        num = num / 2;
        ans += remainder * power;
        power = power * 10;
    }
    cout << "The binary number of the given number is : " << ans;
}

int main()
{
    int n;
    cout << "Enter the number to check its binary form: ";
    cin >> n;
    BinaryNumber(n);
    return 0;
}

/*
EXPLANATION OF THE CODE:

1.  GOAL OF THE CODE:
    This program converts a Decimal number (entered by user) into its Binary form.
    Example: If input is 10, output will be 1010.

2.  HEADER AND NAMESPACE:
    #include <iostream> -> Includes input/output library for cin, cout.
    using namespace std; -> So we don't need to write std:: again and again.

3.  FUNCTION BinaryNumber(int num):
    This function contains the main logic of conversion.

    Variables used:
    - remainder: To store the remainder when num is divided by 2 (it will be 0 or 1).
    - ans: To store the final binary number. Initially 0.
    - power: To set the place value (1, 10, 100, 1000...) because we are building 
             the binary number as a normal decimal-looking integer.

    Logic:
    - while (num > 0) loop runs until the number becomes 0.
    - Inside loop:
      a) remainder = num % 2 -> Gets the binary digit (0 or 1). This is how decimal to binary is calculated.
      b) num = num / 2 -> Reduces the number for next iteration.
      c) ans += remainder * power -> Places the remainder at its correct position in ans.
         For first time power=1 (units place), second time power=10 (tens place), etc.
      d) power = power * 10 -> Moves to the next decimal place.

    - Finally it prints ans.

4.  main() FUNCTION:
    - Takes input n from the user.
    - Calls BinaryNumber(n) to convert and print it.

5.  HOW IT WORKS - DRY RUN (Example for n = 5):
    Initial: ans=0, power=1
    Iteration 1: num=5, remainder=5%2=1, num=5/2=2, ans=0+1*1=1, power=10
    Iteration 2: num=2, remainder=2%2=0, num=2/2=1, ans=1+0*10=1, power=100
    Iteration 3: num=1, remainder=1%2=1, num=1/2=0, ans=1+1*100=101, power=1000
    Loop stops. Output is 101, which is binary of 5.

6.  LIMITATIONS / NOTE:
    - The return type of BinaryNumber is int but you are not returning anything, 
      you are printing inside. So it should be void BinaryNumber(int num) for better practice.
    - This method stores binary as an integer (like 1010). For large numbers (e.g., >1023), 
      ans will overflow because int cannot hold that many digits. A better method is to 
      store it in a string.
*/