#include <iostream>
using namespace std;

void printhello()
{
    cout << "Hello";
}

int integer()
{
    return 10;
}

int main()
{
    printhello();
    cout << endl;
    int a = integer();
    cout << a;
    return 0;
}