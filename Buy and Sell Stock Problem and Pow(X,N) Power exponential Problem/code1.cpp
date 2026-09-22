// Pow(X,N) - Binary Exponentiation - O(log n)
#include <iostream>
using namespace std;

double myPow(double x, long long n) {
    if (n == 0) return 1.0;
    if (n < 0) {
        x = 1 / x;
        n = -n; // make n positive, use long long to handle INT_MIN
    }

    double ans = 1.0;
    while (n > 0) {
        if (n % 2 == 1) { // if last binary bit is 1
            ans = ans * x;
        }
        x = x * x; // square the base
        n = n / 2; // shift to next bit
    }
    return ans;
}

int main() {
    double x;
    long long n;
    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter power (n): ";
    cin >> n;

    double result = myPow(x, n);
    cout << "The power answer is: " << result;
    return 0;
}

/*
EXPLANATION:

1. GOAL: Calculate x^n in O(log n) instead of O(n).
   O(n) method: multiply x n times: for(i=0;i<n;i++) ans*=x; -> If n=1e9, 1e9 loops -> TLE.
   O(log n) method: Use binary representation of n.

2. CORE IDEA OF BINARY EXPONENTIATION:
   Any number can be written in binary.
   Example: x^13, 13 in binary = 1101 = 8 + 4 + 0 + 1
   So x^13 = x^8 * x^4 * x^1

   How to get bits? Keep dividing n by 2.
   n % 2 == 1 means that bit is 1, so we need to multiply that x.

3. DRY RUN: x=2, n=5. 5 in binary = 101.
   ans=1, x=2, n=5
   
   Iteration 1: n=5, n%2=1 -> ans=1*2=2. x=2*2=4. n=5/2=2
   Iteration 2: n=2, n%2=0 -> ans stays 2. x=4*4=16. n=2/2=1
   Iteration 3: n=1, n%2=1 -> ans=2*16=32. x=16*16=256. n=1/2=0 -> loop ends.
   
   Answer = 32. 2^5 = 32 Correct.

4. NEGATIVE POWER HANDLING:
   x^-n = 1 / x^n = (1/x)^n
   So if n<0: x = 1/x, n = -n
   Example: 2^-3 -> x=1/2=0.5, n=3 -> 0.5^3=0.125

   Why long long n? Because if n = -2147483648 (INT_MIN), -n overflows int. So use long long.

5. COMPLEXITY:
   Time: O(log n) because we divide n by 2 each time.
   Space: O(1)

6. YOUR CODE vs CORRECTED CODE:
   Your: BinForm = n (where n is like 101) -> wrong
   Correct: n = 5 (decimal) -> loop does n%2 to get binary 101 automatically.
*/