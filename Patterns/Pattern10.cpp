#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number of rows: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        for (int j = num; j >= i; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}