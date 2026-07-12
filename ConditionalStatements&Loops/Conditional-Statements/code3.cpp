#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number to check it is even or odd: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "The number is even." << endl;
    }
    else
    {
        cout << "The number is odd." << endl;
    }
    return 0;
}