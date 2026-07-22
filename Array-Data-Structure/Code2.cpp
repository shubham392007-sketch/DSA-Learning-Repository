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

/*
EXPLANATION OF THE CODE:

1. GOAL OF THE CODE:
    This program takes marks of 'n' students from the user, stores them in an array,
    and then prints all the marks. This is a dynamic version of the previous array program.

2. DECLARATION:
    int marks[100];
    - Declares an array that can store up to 100 integers.
    - We are declaring size 100 as maximum limit, but we will use only 'n' positions.

    int n;
    - To store how many students' marks the user wants to enter.

3. FIRST for LOOP (Taking Input):
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the marks of student " << i + 1 << " : ";
        cin >> marks[i];
    }

    - Loop runs from i=0 to i=n-1. So if n=3, it runs for i=0,1,2.
    - i + 1 is used only for display purpose so user sees "Student 1" instead of "Student 0",
      because normal people count from 1.
    - cin >> marks[i]; -> Takes input and stores it at ith index of the array.
      Example: if i=0 and user enters 80, then marks[0]=80.

4. SEPARATOR LINE:
    cout << "-------------------------------------------------------------" << endl;
    - Just prints a line to make output clean and easy to read.

5. SECOND for LOOP (Displaying Output):
    for (int i = 0; i < n; i++)
    {
        cout << "Marks of student " << i + 1 << " is " << marks[i];
        cout << endl;
    }
    - Again runs from 0 to n-1.
    - It accesses each stored value marks[i] and prints it.
    - Example: "Marks of student 1 is 80"

6. FLOW OF PROGRAM (Example for n=3):
    User enters n=3
    Loop 1:
      i=0 -> Ask: Enter marks of student 1 -> user enters 45 -> marks[0]=45
      i=1 -> Ask: Enter marks of student 2 -> user enters 67 -> marks[1]=67
      i=2 -> Ask: Enter marks of student 3 -> user enters 89 -> marks[2]=89
    Prints line: -------------------------------------------------------------
    Loop 2:
      i=0 -> Prints: Marks of student 1 is 45
      i=1 -> Prints: Marks of student 2 is 67
      i=2 -> Prints: Marks of student 3 is 89

7. IMPROVEMENTS / NOTES:
    - Your array size is fixed to 100. If user enters n > 100 (like 150), it will cause
      Array Out of Bounds error / Buffer Overflow. You should add a check:
      if(n > 100) { cout << "Cannot enter more than 100"; return 0; }

    - Spelling mistake in cout: "whoose" should be "whose".

    - In modern C++, a better way is to use vector<int> marks(n); so you don't need to
      fix size to 100 beforehand.
*/