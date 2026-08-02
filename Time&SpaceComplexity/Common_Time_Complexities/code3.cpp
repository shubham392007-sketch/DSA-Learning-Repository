// O(n^2)
#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int array[rows][cols];
    for(int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter the element at the postion " << "[" << i << "," << j << "]" << " :";
            cin >> array[i][j];
        }
    }

    return 0;
}