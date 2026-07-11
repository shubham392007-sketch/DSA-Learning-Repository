#include <iostream>
using namespace std;

int main()
{
    //Arithmetic Operators
    int num1 = 45, num2 = 67, num3 = 41, num4 = 90;
    cout << "The sum of " << num1 << " and " << num4 << " is " << num1 + num4 << endl;
    cout << "The difference of " << num2 << " and " << num3 << " is " << num2 - num3 << endl;
    cout << "The product of " << num1 << " and " << num2 << " is " << num1 * num2 << endl;
    cout << "The quotient of " << num4 << " and " << num2 << " is " << num4 / num2 << endl;
    cout << "The remainder of " << num4 << " and " << num2 << " is " << num4 % num2 << endl;
    
    //Relational Operators
    cout << "Is " << num1 << " greater than " << num2 << "? " << (num1 > num2) << endl;
    cout << "Is " << num1 << " less than " << num2 << "? " << (num1 < num2) << endl;
    cout << "Is " << num1 << " equal to " << num2 << "? " << (num1 == num2) << endl;
    cout << "Is " << num1 << " not equal to " << num2 << "? " << (num1 != num2) << endl;
    cout << "Is " << num1 << " greater than or equal to " << num2 << "? " << (num1 >= num2) << endl;
    cout << "Is " << num1 << " less than or equal to " << num2 << "? " << (num1 <= num2) << endl;

    //Logical Operators
    bool condition1 = true, condition2 = false;
    cout << "Is condition1 true? " << condition1 << endl;
    cout << "Is condition2 false? " << condition2 << endl;
    cout << "Is condition1 true and condition2 false? " << (condition1 && condition2) << endl;
    cout << "Is condition1 true or condition2 false? " << (condition1 || condition2) << endl;
    cout << "Is condition1 not true? " << !condition1 << endl;

    //Unary Operators
    cout << "The value of incremented by 1 is: " << ++num1 << endl;
    cout << "The value of decremented by 1 is: " << --num2 <<endl;

    return 0;
}