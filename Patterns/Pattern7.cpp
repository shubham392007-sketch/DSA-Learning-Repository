#include <iostream>
using namespace std;

int main()
{
    int n;
    int count = 0;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        count = count + 1;
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
        }
        cout << endl;
    }
    return 0;
}