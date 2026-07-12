#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number to check it is prime number or not: ";
    cin >> num;
    bool isPrime = true;

    for (int i = 2; i < num - 1; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
            break; // Breaks the loop when a divisor is found, indicating that the number is not prime
        }
        else
        {
            isPrime = true;
        }
    }

    if (isPrime == true)
    {
        cout << num << " is a prime number." << endl;
    }
    else
    {
        cout << num << " is not a prime number." << endl;
    }
}