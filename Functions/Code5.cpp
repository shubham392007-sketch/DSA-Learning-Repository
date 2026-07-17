#include <iostream>
using namespace std;

void Factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "The factorial of entered number is: " << fact;
}

int main()
{
    int num;
    cout << "Enter a number to check its factorial: ";
    cin >> num;
    Factorial(num);
    return 0;
}