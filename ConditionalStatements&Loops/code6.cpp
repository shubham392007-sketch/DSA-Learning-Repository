#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character to check it is uppercase or lowercase: ";
    cin >> ch;

    if (ch>= 65 && ch<= 90) // Implicitly checking if the character is uppercase by comparing its ASCII value
    {
        cout << "The character is uppercase." << endl;
    }
    else
    {
        cout << "The character is lowercase." << endl;
    }
    return 0;
}