// Majority elements - brute force - optimized sorting
#include <iostream>
#include <vector>
#include<algorithm>
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

    sort(vec.begin(), vec.end());
    int frequency = 1, answer = vec[0];
    bool found = false;

    // check if first element itself is majority when n=1
    if (n == 1) {
        cout << "The array with majority element is :" << answer;
        return 0;
    }

    for( int i = 1; i < n; i++)
    {
        if(vec[i] == vec[i-1])
        {
            frequency++;
        }
        else
        {
            frequency = 1;
            answer = vec[i];
        }

        if(frequency > n/2)
        {
            cout << "The array with majority element is :" << answer;
            found = true;
            break;
        }
    }

    if(!found && frequency <= n/2)
    {
        // optional: if no majority found
        // cout << "No majority element found";
    }

    return 0;
}