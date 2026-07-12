#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter your marks to check your grade (0-100): ";
    cin >> marks;

    if (marks < 0 || marks > 100)
    {
        cout << "Invalid marks. Please enter the marks between 0 and 100." << endl;
    }
    else if (marks > 90 && marks <= 100)
    {
        cout << "You scored A grade." << endl;
    }
    else if (marks > 80 && marks <= 90)
    {
        cout << "You scored B grade." << endl;
    }
    else if (marks > 70 && marks >= 80)
    {
        cout << "You scored C grade." << endl;
    }
    else if (marks > 60 && marks <= 70)
    {
        cout << "You scored D grade." << endl;
    }
    else
    {
        cout << "You scored F grade." << endl;
    }
    return 0;
}