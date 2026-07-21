#include <iostream>
using namespace std;

int main()
{
    int marks[100];
    int n;

    cout << "Enter the number of students whoose marks do you want to enter: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the marks of student " << i + 1 << " : ";
        cin >> marks[i];
    }
    cout << "-------------------------------------------------------------" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Marks of student " << i + 1 << " is " << marks[i];
        cout << endl;
    }
    return 0;
}