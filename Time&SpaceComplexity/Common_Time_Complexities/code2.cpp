// O(n) - Linear Time Complexity
#include <iostream>
using namespace std;

int main()
{
    double n;
    cout << "Enter a number to print its factorial: ";
    cin >> n;

    double fact = 1;

    for (double i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    cout << "The factorial of the give number is : " << fact;

    return 0;
}