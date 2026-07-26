// Maximum Sub array sum using brute force method
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

    int maximum_sum = INT8_MIN;
    for (int start = 0; start < n; start++)
    {
        int current_sum = 0;

        for (int end = start; end < n; end++)
        {
            current_sum += array[end];
            maximum_sum = max(current_sum, maximum_sum);
        }
    }

    cout << "The maximum sum of sub array is: " << maximum_sum;

    return 0;
}