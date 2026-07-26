// Printing Sub Arrays
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements to add in array: ";
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element at position " << i << " :";
        cin >> array[i];
    }

    cout << "Your array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    cout << "Your Sub arrays are: " << endl;
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            for (int i = start; i <= end; i++)
            {
                cout << array[i] << " ";
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
EXPLANATION OF THE CODE:

1. GOAL OF THE CODE:
    This program prints ALL possible subarrays of a given array.

2. WHAT IS A SUBARRAY?
    - A subarray is a continuous part of an array.
    - It must be continuous, order must be same.
    - For array [1,2,3], subarrays are:
      [1], [1,2], [1,2,3], [2], [2,3], [3]
    - Total number of subarrays for array of size n = n*(n+1)/2
      Example: n=3 -> 3*4/2 = 6 subarrays.

3. INPUT AND PRINTING ARRAY:
    - Takes n and array elements from user.
    - Prints the array once.
    This part is simple.

4. CORE LOGIC - 3 NESTED LOOPS - This is the most important part:

    This is a standard pattern to print subarrays. Remember it like this:

    Loop 1 -> for (int start = 0; start < n; start++)
    - This fixes the starting point of subarray.
    - start goes from 0 to n-1.

    Loop 2 -> for (int end = start; end < n; end++)
    - This fixes the ending point of subarray.
    - For a given start, end goes from start to n-1.
    - So for start=0, end will be 0,1,2...n-1
      This gives subarrays starting at 0: [0..0], [0..1], [0..2]...

    Loop 3 -> for (int i = start; i <= end; i++)
    {
        cout << array[i] << " ";
    }
    - This loop actually PRINTS the subarray from start to end.

5. DRY RUN for array = [1, 2, 3], n=3

    start=0:
      end=0: i=0 to 0 -> prints [1]
      end=1: i=0 to 1 -> prints [1 2]
      end=2: i=0 to 2 -> prints [1 2 3]
      -> new line

    start=1:
      end=1: i=1 to 1 -> prints [2]
      end=2: i=1 to 2 -> prints [2 3]
      -> new line

    start=2:
      end=2: i=2 to 2 -> prints [3]
      -> new line

    Output:
    1 1 2 1 2 3
    2 2 3
    3

6. PURPOSE OF SPACES AND NEWLINES:
    - cout << " "; after inner i-loop -> gives space between two subarrays in same line.
    - cout << endl; after end-loop -> gives new line after all subarrays starting from same start are printed.
    - So all subarrays starting from same start appear in one line.

7. TIME COMPLEXITY:
    - 3 nested loops.
    - Roughly O(n^3). This is okay for printing, but for large n (like n>500) it will be slow.
    - Number of subarrays is O(n^2), and to print each you take O(n), so O(n^3).

8. NOTE / IMPROVEMENT:
    - int array[n]; -> VLA (Variable Length Array) is not standard C++. Use vector<int> array(n);
    - This code is great for learning. For problems like Maximum Subarray Sum, you don't need to print,
      you just calculate sum inside the innermost loop.
*/