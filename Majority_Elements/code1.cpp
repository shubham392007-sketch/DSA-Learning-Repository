// Pair sum - brute force approach
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

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] + array[j] == target)
            {
                vec_1.push_back(array[i]);
                vec_1.push_back(array[j]);
            }
        }
    }

    cout << "The pair whose sum is equal to target value " << target << " is: ";
    for (int val : vec_1)
    {
        cout << val << " ";
    }
    return 0;
}