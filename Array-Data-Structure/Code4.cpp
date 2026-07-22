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

    if (n <= 0)
    {
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
        smallest = min(num[i], smallest);
    }

    cout << "The smallest number among all the numbers entered is : " << smallest;
    return 0;
}

/*
EXPLANATION OF THE CODE:

1. GOAL OF THE CODE:
    This program finds the smallest number from 'n' numbers entered by the user.
    This is an improved version of the previous code using the built-in min() function.

2. HEADER FILES:
    - #include <iostream>: For cin, cout.
    - #include <climits>: For INT_MAX.
    - #include <vector>: For using vector (dynamic array).

3. INITIALIZATION:
    int smallest = INT_MAX;
    - INT_MAX = 2147483647, the largest possible int value.
    - We initialize smallest with it so that any user input will be smaller,
      and will replace it in the first comparison itself.

4. INPUT VALIDATION:
    if (n <= 0) {... }
    - If user enters 0 or negative, it prints an error message and exits with return 0;
    - This avoids crash and invalid loop.

5. VECTOR DECLARATION:
    vector<int> num(n);
    - Creates a dynamic array of size 'n' exactly as user wants.

6. FIRST for LOOP - Input:
    for (int i = 0; i < n; i++)
    {
        cout << "Enter integer value " << i + 1 << " : ";
        cin >> num[i];
    }
    - Takes n inputs and stores them in vector.

7. SECOND for LOOP - Finding Smallest using min():
    for (int i = 0; i < n; i++)
    {
        smallest = min(num[i], smallest);
    }
    - This is the main change from your last code.
    - min(a, b) is a built-in function in C++ (from <algorithm> but also works with iostream in most compilers)
      that returns the smaller of the two values.

    - Logic: For each number, it compares num[i] and current smallest,
      and keeps the smaller one in smallest.

    - DRY RUN for input: 7, 3, 9
      Start: smallest = INT_MAX
      i=0: smallest = min(7, INT_MAX) = 7
      i=1: smallest = min(3, 7) = 3
      i=2: smallest = min(9, 3) = 3
      Final smallest = 3.

    - Difference from previous version:
      Previous: if (num[i] < smallest) { smallest = num[i]; }
      Current: smallest = min(num[i], smallest);
      Both do the SAME work, but min() is shorter and cleaner.

8. OUTPUT:
    Prints the final smallest value.

9. NOTES / IMPROVEMENT:
    - You used min() but didn't include <algorithm>. It works because many compilers
      include it indirectly via iostream, but for good practice you should add:
      #include <algorithm>

    - You can also do input + finding smallest in a single loop to make it faster:

      for (int i=0; i<n; i++) {
          cin >> num[i];
          smallest = min(num[i], smallest);
      }
*/