// Pair sum(sorted array) - two pointer approach - optimal method
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements you want to enter in array: ";
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value at index " << i << " : ";
        cin >> array[i];
    }
    cout << "Your array is is: ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    vector<int> vec_1;
    int target;
    cout << "Enter your target value which must be the sum of the pairs present in array: ";
    cin >> target;

    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int pair_sum = array[i] + array[j];

        if (pair_sum > target)
        {
            j--; // sum too big, decrease right pointer
        }
        else if (pair_sum < target)
        {
            i++; // sum too small, increase left pointer
        }
        else
        {
            vec_1.push_back(array[i]);
            vec_1.push_back(array[j]);
            i++;
            j--; // move both after finding a pair
        }
    }

    cout << "The pair whose sum is equal to target value " << target << " is: ";
    for (int val : vec_1)
    {
        cout << val << " ";
    }
    return 0;
}