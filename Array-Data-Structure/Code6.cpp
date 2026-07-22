/*Linear Search Algorithm*/
#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i; // found, return position
        }
    }
    return -1; // not found
}

int main()
{
    int arr[] = {1, 3, 6, 5, 3, 8, 4, 0, 2, 7};
    int size = 10;
    int target = 8;

    int result = LinearSearch(arr, size, target);

    if (result!= -1)
    {
        cout << "Element " << target << " found at index : " << result;
    }
    else
    {
        cout << "Element " << target << " not found in array.";
    }

    return 0;
}

/*
EXPLANATION OF THE CODE:

1. GOAL OF THE CODE:
    This program implements Linear Search to find whether a target element exists in an array
    and if it exists, at which index.

2. WHAT IS LINEAR SEARCH?
    - It is the simplest searching algorithm.
    - It checks each element of the array one by one from start to end until target is found.
    - Time Complexity: O(n) in worst case, because we may have to check all n elements.

3. FUNCTION LinearSearch(int arr[], int size, int target):
    Parameters:
    - arr[]: The array to search in.
    - size: Total number of elements in array.
    - target: The element we want to find.

    Logic:
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target) -> Compare current element with target.
        {
            return i; // If match found, immediately return its index. Function stops here.
        }
    }
    return -1; // If loop completes and no match found, return -1.
               // -1 is a standard convention to show "Not Found" because -1 can never be a valid index.

4. main() FUNCTION:
    - int arr[] = {1, 3, 6, 5, 3, 8, 4, 0, 2, 7}; -> Array with 10 elements (index 0 to 9).
    - int size = 10; -> Size of array.
    - int target = 8; -> Element to search.
    - int result = LinearSearch(arr, size, target); -> Calls function and stores returned index in result.

5. RESULT CHECKING:
    if (result!= -1) -> Means element found
    {
        cout << "Element " << target << " found at index : " << result;
    }
    else -> Means result == -1
    {
        cout << "Element " << target << " not found in array.";
    }

6. DRY RUN for your example:
    arr = [1, 3, 6, 5, 3, 8, 4, 0, 2, 7], target = 8
    i=0: arr[0]=1, 1==8? No
    i=1: arr[1]=3, 3==8? No
    i=2: arr[2]=6, 6==8? No
    i=3: arr[3]=5, 5==8? No
    i=4: arr[4]=3, 3==8? No
    i=5: arr[5]=8, 8==8? Yes -> return 5
    Output: Element 8 found at index : 5

    If target was 9:
    Loop runs till i=9, no match, return -1 -> prints "not found"

7. ADVANTAGES / DISADVANTAGES:
    Advantage: Works on both sorted and unsorted arrays. Very simple to implement.
    Disadvantage: Slow for large arrays compared to Binary Search (which needs sorted array).

8. IMPROVEMENT TIP:
    You can take target from user instead of hardcoding:
    cout << "Enter element to search: ";
    cin >> target;
*/