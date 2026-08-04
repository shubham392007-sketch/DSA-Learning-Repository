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

/*
EXPLANATION OF THE CODE:

1. GOAL OF THE CODE:
    To show O(1) Constant Time Complexity.
    Task: Find sum of first n natural numbers.
    Example: n=5 -> 1+2+3+4+5 = 15.

2. WHAT IS O(1) - CONSTANT TIME?
    - O(1) means time taken does NOT depend on size of input n.
    - No matter if n=10, n=1000, or n=1000000, this code will take same, fixed time.
    - Why? Because there is NO loop. Only 1 formula calculation.

3. THE FORMULA USED:
    int sum = (n*(n+1))/2;
    - This is Gauss formula to find sum of first n numbers.
    - Derived by mathematician Gauss.

4. LINE-BY-LINE:
    cin >> n; -> Takes n from user.
    int sum = (n*(n+1))/2; -> Direct mathematical calculation in 1 step.
    cout -> Prints result.

5. DRY RUN: n=5
    sum = (5 * (5+1))/2
        = (5*6)/2
        = 30/2
        = 15 -> Correct.

6. WHY THIS IS O(1)?
    Compare with loop method:

    Loop Method (O(n)):
    int sum=0;
    for(int i=1; i<=n; i++) sum += i; // If n=1000, loop runs 1000 times. If n=1 lakh, 1 lakh times.
    // Time grows as n grows -> O(n)

    Your Method (O(1)):
    int sum = (n*(n+1))/2; // Only 1 multiplication, 1 addition, 1 division. Always 3 operations.
    // Time is constant, no loop -> O(1)

7. KEY POINTS FOR INTERVIEW:
    - O(1) is the BEST / FASTEST complexity possible.
    - Examples of O(1):
      a) Accessing array element by index: arr[5]
      b) Formula calculation
      c) Stack push/pop
      d) Hash Map get/put (average case)
    - If you can convert O(n) loop to O(1) formula, always do it.

8. BUG / IMPROVEMENT:
    - Data type overflow: int can store up to ~2e9.
      If n = 100000, sum = 100000*100001/2 = 5,000,050,000 which is > 2e9 -> int overflow, wrong answer.
      Fix: Use long long.
      long long n; cin>>n; long long sum = (n*(n+1))/2;

*/