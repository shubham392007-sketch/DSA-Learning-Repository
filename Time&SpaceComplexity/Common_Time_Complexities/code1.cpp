//O(1) - Constant time complexity
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = (n*(n+1))/2;
    cout << "The value of sum variable is: " << sum;
    return 0;
}
