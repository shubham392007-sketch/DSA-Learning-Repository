#include <iostream>
using namespace std;

void SumofDigits(int n)
{
    int lastdigit;
    int digitsum = 0;
    while (n > 0)
    {
        lastdigit = n % 10;
        n = n / 10;
        digitsum += lastdigit;
    }
    cout << "The sum of the digits are: " << digitsum;
}

int main()
{
    int num;
    cout << "Enter a number to calculate its sum of digits: ";
    cin >> num;
    SumofDigits(num);
    return 0;
}