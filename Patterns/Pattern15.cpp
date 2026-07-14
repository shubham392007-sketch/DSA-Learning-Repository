#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < n - i + 1; k++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}