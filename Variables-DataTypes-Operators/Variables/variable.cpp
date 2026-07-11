#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    char b = 'A';
    bool c = false;
    float d = 10.5f;
    double e = 13.342;


    cout << "Integer: " << a << endl;
    cout << "Character: " << b << endl;
    cout << "Boolean: " << c << endl; // true represents 1 and false represent 0
    cout << "Float: " << d << endl;
    cout << "Double: " << e << endl;

    cout << "Size of Integer: " << sizeof(a) << " bytes" << endl;
    cout << "Size of Character: " << sizeof(b) << " bytes" << endl;
    cout << "Size of Boolean: " << sizeof(c) << " bytes" << endl;
    cout << "Size of Float: " << sizeof(d) << " bytes" << endl;
    cout << "Size of Double: " << sizeof(e) << " bytes" << endl;

    return 0;
}