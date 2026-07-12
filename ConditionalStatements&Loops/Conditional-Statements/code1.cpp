#include <iostream>
using namespace std;

int main()
{
    double num;
    cout << "Enter a number to check if it is positive, negative, or zero: ";
    cin >> num;

    if (num > 0)
    {
        cout << "The number id positive." << endl;
    }
    else if (num < 0)
    {
        cout << "The number is negative." << endl;
    }
    else
    {
        cout << "The number is zero." << endl;
    }
    return 0;
}