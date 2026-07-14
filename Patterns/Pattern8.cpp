#include <iostream>
using namespace std;

int main()
{
    int n;
    char ch = 'A';
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
        ch = ch + 1;
    }
    return 0;
}