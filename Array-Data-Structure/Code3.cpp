#include <iostream>
#include <climits> // for INT_MAX
#include <vector>
using namespace std;

int main()
{
    int smallest = INT_MAX;
    int n;

    cout << "Enter how many integers you want to check: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a number greater than 0.";
        return 0;
    }

    vector<int> num(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter integer value " << i + 1 << " : ";
        cin >> num[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (num[i] < smallest)
        {
            smallest = num[i];
        }
    }

    cout << "The smallest number among all the numbers entered is : " << smallest;
    return 0;
}

/*
EXPLANATION OF THE CODE:

1. GOAL OF THE CODE:
    This program finds the smallest number from 'n' numbers entered by the user.

2. HEADER FILES:
    - #include <iostream>: For cin, cout.
    - #include <climits>: To use INT_MAX constant.
    - #include <vector>: To use vector (dynamic array) in C++.

3. INITIALIZATION:
    int smallest = INT_MAX;
    - INT_MAX is the maximum possible value an int can hold (2147483647).
    - We set smallest to this maximum value initially. This is a trick.
    - Why? So that any number entered by user will be smaller than this,
      and the first comparison will always replace it. If we set smallest=0,
      and user enters all positive numbers, logic would fail.

4. INPUT VALIDATION:
    if (n <= 0) {... }
    - Checks if user entered 0 or negative count. If yes, shows error and exits.
    - This prevents empty vector and unnecessary loops. Good practice.

5. VECTOR DECLARATION:
    vector<int> num(n);
    - Creates a dynamic array (vector) of size n.
    - Better than int num[100] because size is exactly what user needs.
    - Example: If n=3, it creates num[0], num[1], num[2].

6. FIRST for LOOP - Taking Input:
    for (int i = 0; i < n; i++)
    {
        cout << "Enter integer value " << i + 1 << " : ";
        cin >> num[i];
    }
    - Loops n times and stores each entered value in the vector.

7. SECOND for LOOP - Finding Smallest:
    for (int i = 0; i < n; i++)
    {
        if (num[i] < smallest)
        {
            smallest = num[i];
        }
    }
    - This is the core logic.
    - It checks each element one by one:
      If current element num[i] is less than the current smallest,
      then update smallest to that element.

    - DRY RUN: Suppose user enters: 5, 2, 9
      Start: smallest = INT_MAX (2147483647)
      i=0: num[0]=5, 5 < 2147483647 -> True, so smallest=5
      i=1: num[1]=2, 2 < 5 -> True, so smallest=2
      i=2: num[2]=9, 9 < 2 -> False, smallest remains 2
      Final smallest = 2.

8. OUTPUT:
    cout << "The smallest number among all the numbers entered is : " << smallest;
    - Prints the final smallest value found.

9. TIME COMPLEXITY:
    - O(n) because we traverse the array two times (once for input, once for finding min).
    - You can actually do it in one loop also to make it more efficient:
      Take input and check for smallest in the same loop.

    Example Optimized Way:
    for (int i = 0; i < n; i++) {
        cin >> num[i];
        if (num[i] < smallest) smallest = num[i];
    }
*/