#include <iostream>
using namespace std;

int main()
{
    int count = 1;
    int num;
    cout << "Enter a number to print it from 1 to that number: ";
    cin >> num;
    while (count <= num)
    {
        cout << count << endl;
        count++;
    }
    return 0;
}