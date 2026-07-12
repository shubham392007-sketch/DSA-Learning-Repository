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
        if (i == 9)
        {
            break; // Breaks the loop when i is equal to 9
        }
    }
    return 0;
}