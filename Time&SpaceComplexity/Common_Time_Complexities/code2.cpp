// O(n) - Linear Time Complexity
#include <iostream>
using namespace std;

int main()
{
    double n;
    cout << "Enter a number to print its factorial: ";
    cin >> n;

    double fact = 1;

    for (double i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    cout << "The factorial of the give number is : " << fact;

    return 0;
}

/*
EXPLANATION OF THE CODE:

1. GOAL OF THE CODE:
    To show O(n) Linear Time Complexity.
    Task: Find factorial of n.
    Example: n=5 -> 5! = 5*4*3*2*1 = 120.

2. WHAT IS O(n) - LINEAR TIME?
    - O(n) means time taken grows LINEARLY with input size n.
    - If n doubles, time doubles.
    - If n=5, loop runs 5 times. If n=1000, loop runs 1000 times.
    - Your code has ONE loop from 1 to n, so it's O(n).

3. LINE-BY-LINE:

    double n; -> Takes n as double. (Should be int)
    double fact = 1; -> Stores answer. fact=1 because multiplication identity.
    
    for (double i = 1; i <= n; i++)
    {
        fact = fact * i; -> Multiply fact with i each time.
    }
    // i=1: fact=1*1=1
    // i=2: fact=1*2=2
    // i=3: fact=2*3=6
    // i=4: fact=6*4=24
    // i=5: fact=24*5=120

4. DRY RUN: n=4
    fact=1
    i=1: fact=1*1=1
    i=2: fact=1*2=2
    i=3: fact=2*3=6
    i=4: fact=6*4=24
    Output: 24

5. WHY THIS IS O(n)?
    - Number of operations = n.
    - Loop: 1 to n -> n iterations.
    - Time Complexity = O(n).
    - This is the most common complexity. Most array traversals are O(n).

6. COMPARISON WITH O(1):
    - Previous code sum = n*(n+1)/2 was O(1) -> 1 step, no loop.
    - This factorial code is O(n) -> needs loop, n steps.
    - O(1) < O(n). O(1) is faster.
    - You cannot find factorial with a direct O(1) formula (without loop/gamma function), so O(n) is the best possible for factorial.

7. BUGS / IMPROVEMENTS - VERY IMPORTANT:

    a) Use int/long long, NOT double for factorial:
       - double for loop counter is bad practice. double has precision errors.
       - Example: double i, n can cause infinite loop or wrong condition.
       - Factorial is defined for integers only, not 5.5!
       Correct: int n; long long fact=1; for(int i=1; i<=n; i++)

    b) Overflow:
       - double will give answer in scientific notation for large n and lose accuracy.
       - Even long long overflows after 20! (20! = 2.4e18 > 9e18 limit).
       - 21! onwards you need bigger data types or BigInteger library.
       - For n=100, answer has 158 digits, cannot store in normal types.

    c) Negative input:
       - Factorial of negative not defined. You should check if n<0.

    d) Correct Code:
    #include <iostream>
    using namespace std;
    int main(){
        int n; cin>>n;
        long long fact=1;
        if(n<0) cout<<"Not defined";
        else {
            for(int i=1; i<=n; i++) fact*=i;
            cout<<fact;
        }
    }

8. EXAMPLES OF O(n):
    - Finding sum of array elements using loop
    - Finding max/min in array
    - Printing array
    - Your previous brute force for max subarray O(n^2) had 2 loops, this has 1 loop so O(n).

*/