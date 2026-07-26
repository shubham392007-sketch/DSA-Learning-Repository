//Printing Sub Arrays
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements to sdd in array: ";
    cin >> n;
    int array[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Enter element at position " << i << " :";
        cin >> array[i];
    }

    cout << "Your array is: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    
    cout << "Your Sub arrays are: " << endl;
    for(int start = 0; start < n; start++)
    {
        for(int end = start; end < n; end++)
        {
            for(int i = start; i<=end; i++)
            {
                cout << array[i] << " ";
            }
            cout << " ";
        }
        cout << endl;
    }



    return 0;
}