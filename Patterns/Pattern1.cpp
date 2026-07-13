// Square Pattern
// Generally the outer loop in the nested loop is used to print numbers of lines or rows. And inner loop is used to the print the numbers of columns or elements in each line. In this pattern, we have to print a square pattern of stars. The number of rows and columns is equal to the number of lines. The outer loop is used to print the number of lines and the inner loop is used to print the number of stars in each line.
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

// i = 0 to n -1
// i = 1 to n