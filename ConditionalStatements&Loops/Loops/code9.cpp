#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the number of rows of star that you want to print: ";
    cin >> n;
    cout << "Enter the number of stars that  you want to print in each row: ";
    cin >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}