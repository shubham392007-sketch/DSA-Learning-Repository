#include <iostream>
#include <climits> // for INT_MIN
#include <vector>
using namespace std;

int main()
{
    int largest = INT_MIN; // start with smallest possible value
    int n;

    cout << "Enter how many integers you want to check: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a number greater than 0.";
        return 0;
    }

    vector<int> num(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter integer value " << i + 1 << " : ";
        cin >> num[i];
        if (num[i] > largest)
        {
            largest = num[i];
        }
    }

    cout << "The largest number among all the numbers entered is : " << largest;
    return 0;
}