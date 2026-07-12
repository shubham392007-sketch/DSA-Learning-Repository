#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number upto which the sum of numbers will be printed which are divisible by 3: ";
    cin >> num;
    int sum = 0;

    for (int i = 1; i <= num; i++)
    {
        if (i % 3 == 0)
        {
            sum = sum + i;
        }
        else
        {
            continue; // Skips the rest of the loop when i is not divisible by 3 and continues with the next iteration
        }
    }
    cout << "The sum of numbers upto " << num << " which are divisible by 3 is: " << sum << endl;
}