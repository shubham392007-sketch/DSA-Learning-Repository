#include<iostream>
using namespace std;

void SumofNumbers(int num)
{
    int sum = 0;
    for (int i = 1; i<=num; i++)
    {
        sum = sum + i;
    }
    cout << "The sum of numbers upto " << num << " is: " << sum;
}
int main()
{
    int n;
    cout << "Enter a number for summation upto that number: ";
    cin >> n;
    SumofNumbers(n);
    return 0;
}