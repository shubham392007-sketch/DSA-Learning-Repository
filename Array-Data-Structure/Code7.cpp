#include <iostream>
using namespace std;
void ReverseArray(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 8;

    ReverseArray(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

/*
EXPLANATION OF THE CODE:

1. GOAL OF THE CODE:
    This program reverses an array. Example: [1,2,3,4] becomes [4,3,2,1].

2. FUNCTION ReverseArray(int arr[], int size):
    This is the core logic. It uses the TWO-POINTER APPROACH.

    Variables:
    - start = 0 -> Points to the first element (left side).
    - end = size - 1 -> Points to the last element (right side).
      For size=8, end = 7 (last index).

    Logic:
    while (start < end) -> Loop runs until both pointers meet or cross.
    {
        swap(arr[start], arr[end]); -> Swaps the element at start with element at end.
        start++; -> Move left pointer one step forward.
        end--; -> Move right pointer one step backward.
    }

    - swap() is a built-in function in C++ that swaps two values.

3. DRY RUN for your array: {1, 2, 3, 4, 5, 6, 7, 8}
    Initial: start=0 (1), end=7 (8)
    Iteration 1: swap arr[0] and arr[7] -> {8, 2, 3, 4, 5, 6, 7, 1}, start=1, end=6
    Iteration 2: swap arr[1] and arr[6] -> {8, 7, 3, 4, 5, 6, 2, 1}, start=2, end=5
    Iteration 3: swap arr[2] and arr[5] -> {8, 7, 6, 4, 5, 3, 2, 1}, start=3, end=4
    Iteration 4: swap arr[3] and arr[4] -> {8, 7, 6, 5, 4, 3, 2, 1}, start=4, end=3
    Now start=4, end=3 -> condition start < end (4 < 3) is FALSE, loop stops.
    Array is now reversed.

4. main() FUNCTION:
    - int arr[] = {1, 2, 3, 4, 5, 6, 7, 8}; -> Original array.
    - int size = 8; -> Size of array.
    - ReverseArray(arr, size); -> Calls function. Note: Array is passed by reference in C++,
      so changes made inside function will affect original array in main().
    - for loop at end -> Prints the reversed array: 8 7 6 5 4 3 2 1

5. TIME & SPACE COMPLEXITY:
    - Time Complexity: O(n) -> We traverse only half the array, but O(n/2) = O(n).
    - Space Complexity: O(1) -> No extra array used, reversal is done in-place.
      This is the most efficient way.

6. ALTERNATIVE METHOD:
    You could also reverse by creating a new array and copying from end, but that would take O(n) extra space.
    Two-pointer method is best.

7. IMPROVEMENT:
    If you want to reverse without using swap(), you can do it manually:
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    This is exactly what swap() does internally.
*/