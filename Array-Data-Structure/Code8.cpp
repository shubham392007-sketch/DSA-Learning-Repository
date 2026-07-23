#include <iostream>
using namespace std;

void SumofArrayElements(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "The sum of all the array elements is: " << sum << endl;
}

void ProductofArrayElements(int arr[], int size)
{
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product = product * arr[i];
    }
    cout << "The product of all the array elements is: " << product << endl;
}

int main()
{
    int n;
    cout << "Enter the number of elements you want to enter in array: ";
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value at " << i << " position: ";
        cin >> array[i];
    }

    SumofArrayElements(array, n);

    ProductofArrayElements(array, n);

    return 0;
}

/*
EXPLANATION OF THE CODE:

1. GOAL OF THE CODE:
    This program takes 'n' elements from the user, stores them in an array,
    then calculates and prints the SUM and PRODUCT of all elements.

2. FUNCTION 1: SumofArrayElements(int arr[], int size)
    - Purpose: To find sum of all array elements.
    - int sum = 0; -> We initialize sum with 0. Why 0? Because 0 is the identity for addition.
      If we start with any other number, final sum will be wrong.
    - Loop: for (int i = 0; i < size; i++) -> Goes through each element.
    - Logic: sum += arr[i]; is same as sum = sum + arr[i];
      It adds current element to the sum.

    - DRY RUN for arr = {2, 3, 4}
      Start sum=0
      i=0: sum = 0 + 2 = 2
      i=1: sum = 2 + 3 = 5
      i=2: sum = 5 + 4 = 9
      Final sum = 9.

3. FUNCTION 2: ProductofArrayElements(int arr[], int size)
    - Purpose: To find product of all array elements.
    - int product = 1; -> We initialize product with 1. Why 1? Because 1 is identity for multiplication.
      If we initialize with 0, product will always remain 0 (0 * anything = 0).
    - Logic: product = product * arr[i];

    - DRY RUN for arr = {2, 3, 4}
      Start product=1
      i=0: product = 1 * 2 = 2
      i=1: product = 2 * 3 = 6
      i=2: product = 6 * 4 = 24
      Final product = 24.

4. main() FUNCTION:
    - Takes n from user (number of elements).
    - int array[n]; -> Creates array of size n. This is called Variable Length Array (VLA).
    - Loop takes n inputs from user and stores in array[i].
    - Then calls both functions one by one: SumofArrayElements(array, n); and ProductofArrayElements(array, n);

5. FLOW OF PROGRAM:
    Example: n=3, elements = 2, 5, 3
    array = [2, 5, 3]
    Sum function called -> sum = 10 -> prints: The sum of all the array elements is: 10
    Product function called -> product = 30 -> prints: The product of all the array elements is: 30

6. IMPORTANT NOTES / BUGS:

    a) int array[n]; -> This is NOT standard C++. In standard C++, array size must be constant at compile time.
       g++ allows it, but it's better to use vector<int> array(n); or new int[n].
       Recommended: vector<int> array(n); -> more safe.

    b) Product Overflow: Product grows very fast. For example, if array is {10,20,30,40}, product is 240000.
       For larger numbers, int will overflow. Better to use long long for product:
       long long product = 1;

    c) If array contains 0, product will become 0.

    d) If n is large, product can become extremely large. You might want to use long long or check overflow.

7. TIME COMPLEXITY:
    - Both functions are O(n).
    - Since we call them separately, total is O(n) + O(n) = O(n). You could also calculate sum and product in a single loop to make it slightly more efficient.
*/