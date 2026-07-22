#include <iostream>
#include <climits> // for INT_MIN
#include <vector>
using namespace std;

int main()
{
    int largest = INT_MIN; // start with smallest possible value
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
        if (num[i] > largest)
        {
            largest = num[i];
        }
    }

    cout << "The largest number among all the numbers entered is : " << largest;
    return 0;
}

/*
EXPLANATION OF THE CODE:

1. GOAL OF THE CODE:
    This program finds the LARGEST number from 'n' numbers entered by the user.

2. HEADER FILES:
    - #include <iostream>: For cin, cout.
    - #include <climits>: For INT_MIN.
    - #include <vector>: For using vector (dynamic array).

3. INITIALIZATION:
    int largest = INT_MIN;
    - INT_MIN is the smallest possible value an int can hold (-2147483648).
    - We start largest with this value.
    - Why? So that any number entered by the user (even -1000) will be greater than INT_MIN,
      and will replace it in the first comparison. This trick ensures it works for
      both positive and negative numbers.

4. INPUT VALIDATION:
    if (n <= 0) {...}
    - If user enters 0 or negative count, it shows error and exits.
    - Prevents creating an empty vector and running loops unnecessarily.

5. VECTOR DECLARATION:
    vector<int> num(n);
    - Creates a dynamic array of exact size 'n' that user wants.

6. for LOOP - Input + Finding Largest Together (OPTIMIZED):
    for (int i = 0; i < n; i++)
    {
        cout << "Enter integer value " << i + 1 << " : ";
        cin >> num[i];
        if (num[i] > largest)
        {
            largest = num[i];
        }
    }
    - This is more efficient than your smallest program where you used two separate loops.
    - Here you are doing TWO tasks in ONE loop:
      a) Taking input: cin >> num[i];
      b) Checking for largest: if current number > largest, update largest.

    - DRY RUN for input: -5, 10, 3
      Start: largest = INT_MIN (-2147483648)
      i=0: num[0]=-5, -5 > -2147483648 -> True, largest=-5
      i=1: num[1]=10, 10 > -5 -> True, largest=10
      i=2: num[2]=3, 3 > 10 -> False, largest stays 10
      Final largest = 10.

7. OUTPUT:
    cout << "The largest number among all the numbers entered is : " << largest;
    - Prints the largest number found.

8. KEY CONCEPT - INT_MIN vs INT_MAX:
    - For finding SMALLEST, we start with INT_MAX (biggest value).
    - For finding LARGEST, we start with INT_MIN (smallest value).
    - This is the opposite logic and is a standard pattern in programming.

9. IMPROVEMENT:
    - You can also write the condition as:
      largest = max(largest, num[i]);
      For this you need to include #include <algorithm>
      This is same as your previous min() logic but for maximum.
*/