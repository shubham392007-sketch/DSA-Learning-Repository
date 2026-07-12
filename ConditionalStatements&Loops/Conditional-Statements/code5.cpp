#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character to check it is uppercase or lowercase: ";
    cin >> ch;

    if (ch>='A' && ch<='Z')
    {
        cout << "The character is uppercase." << endl;
    }
    else
    {
        cout << "The character is lowercase." << endl;
    }
    return 0;
}