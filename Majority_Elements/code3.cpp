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

    // converting your array into vector
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        vec.push_back(array[i]);
    }

    for (int value : vec)
    {
        int frequency = 0;
        for (int equal : vec)
        {
            if (value == equal)
            {
                frequency++;
            }
        }
         if(frequency > n/2)
         {
            cout << "The array with majority element is :" << value;
            break;
         }
    }
    return 0;
}