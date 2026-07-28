//Majority elements - Moore's Algorithm
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

    int frequency = 0;
    int answer = 0;

    for (int i = 0; i < n; i++)
    {
        if(frequency == 0)
        {
            answer = vec[i];
        }
        if(answer == vec[i])
        {
            frequency ++;
        }
        else
        {
            frequency--;
        }
    }
    cout << "The array with majority element is :" << answer;
    return 0;
}