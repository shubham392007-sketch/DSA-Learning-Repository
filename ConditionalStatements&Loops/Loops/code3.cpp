#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number to print series upto that number from 1: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        cout << i << endl;
    }
    return 0;
}