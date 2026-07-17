//Binomial Coefficient
#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for(int i =1; i<=n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int factn_r = factorial(n-r);

    return fact_n/((fact_r)*factn_r);
}

int main()
{
    int n, r;
    cout << "Enter the value of n to calculate the binomial coefficient: ";
    cin >> n;
    cout << "Enter the value of r to calculate the binomial coefficient: ";
    cin >> r;

    int ans = nCr(n,r);
    cout << "The binomial coefficient is : " << ans;

    return 0;
}