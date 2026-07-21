#include <iostream>
#include <climits> // for INT_MAX
#include <vector>
using namespace std;

int main()
{
    int smallest = INT_MAX;
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
    }

    for (int i = 0; i < n; i++)
    {
        if (num[i] < smallest)
        {
            smallest = num[i];
        }
    }

    cout << "The smallest number among all the numbers entered is : " << smallest;
    return 0;
}