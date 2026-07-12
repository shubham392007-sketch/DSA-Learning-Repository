#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age to check you are eligible to vote or not: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You are eligible to vote." << endl;
    }
    else if (age <= 0)
    {
        cout << "Enter a valid age." << endl;
    }
    else
    {
        cout << "You are not eligible to vote." << endl;
    }
    return 0;
}