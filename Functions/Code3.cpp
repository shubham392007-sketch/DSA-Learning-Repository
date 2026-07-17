#include <iostream>
using namespace std;

void MinofTwo(int a, int b)
{
    if (a < b)
    {
        cout << "The number " << a << " is less than " << b;
    }
    else if (b < a)
    {
        cout << "The number " << b << " is less than " << a;
    }
    else
    {
        cout << "Both numbers are same.";
    }
}

int main()
{
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the secong number: ";
    cin >> num2;
    MinofTwo(num1, num2);
    return 0;
}
