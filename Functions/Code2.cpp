#include <iostream>
using namespace std;

int Addition(int a, int b)
{
    return a + b;
}
int main()
{
    int num1, num2;
    cout << "Enter first number for addition: ";
    cin >> num1;
    cout << "Enter second number for addition: ";
    cin >> num2;
   int c = Addition(num1, num2);
   cout << "The addtion of two number is: " << c;
    return 0;
}