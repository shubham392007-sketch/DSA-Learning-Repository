// Buy Sell Stock Problem - LeetCode 121. Best Time to Buy and Sell Stock
#include <iostream> // small i, not Iostream
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of days about trade: ";
    cin >> n;

    // int prices[n]; -> Not standard C++, use vector
    vector<int> prices(n);

    for (int i = 0 ; i < n ; i++)
    {
        cout << "Enter the price of the trade of day " << i + 1 <<" :";
        cin >> prices[i];
    }

    cout << "Your prices are: ";
    for (int i = 0; i < n; i++)
    {
        cout << prices[i] << " ";
    }

    if(n == 0){
        cout << "\nNo prices given";
        return 0;
    }

    int BestBuy = prices[0];
    int MaxProfit = 0;

    for(int i = 0; i < n ; i++)
    {
        if(prices[i] > BestBuy)
        {
            MaxProfit = max(MaxProfit, prices[i] - BestBuy);
        }
        BestBuy = min(BestBuy, prices[i]);
    }
    cout << endl;
    cout << "The maximum profit is: " << MaxProfit;
    return 0;
}

/*
EXPLANATION OF THE CODE:

1. GOAL OF THE CODE - LeetCode 121:
    You are given prices where prices[i] is price on day i.
    You can buy on one day and sell on a FUTURE day.
    Find maximum profit. If no profit, return 0.

    Example: [7,1,5,3,6,4]
    Buy on day 2 (price=1), Sell on day 5 (price=6) -> Profit = 6-1=5 -> Max Profit 5.

2. WHY YOUR PREVIOUS BRUTE FORCE WOULD FAIL?
    Brute Force: 2 loops
    for(i=0 to n-1) for(j=i+1 to n-1) profit = prices[j]-prices[i] find max
    Time: O(n^2) -> For n=1e5, TLE.
    Your current code is O(n) -> Optimal.

3. CORE IDEA - TRACK BEST BUY:

    int BestBuy = prices[0]; -> Minimum price seen so far (cheapest buy till now)
    int MaxProfit = 0; -> Maximum profit so far

    for each price:
        1. If current price > BestBuy -> Can we make profit by selling today?
           Profit = prices[i] - BestBuy
           MaxProfit = max(MaxProfit, Profit)

        2. Update BestBuy = min(BestBuy, prices[i]) -> If today's price is cheaper than before, it's better to buy today for future.

4. DRY RUN: prices = [7,1,5,3,6,4]

    Start: BestBuy=7, MaxProfit=0
    i=0 price=7: 7>7? No. BestBuy = min(7,7)=7
    i=1 price=1: 1>7? No. BestBuy = min(7,1)=1 -> Found cheaper buy!
    i=2 price=5: 5>1? Yes. Profit=5-1=4. MaxProfit=max(0,4)=4. BestBuy=min(1,5)=1
    i=3 price=3: 3>1? Yes. Profit=3-1=2. MaxProfit=max(4,2)=4. BestBuy=1
    i=4 price=6: 6>1? Yes. Profit=6-1=5. MaxProfit=max(4,5)=5. BestBuy=1
    i=5 price=4: 4>1? Yes. Profit=4-1=3. MaxProfit stays 5.

    Answer: 5

5. TIME & SPACE COMPLEXITY:
    Time: O(n) -> Single loop.
    Space: O(1) -> Only 2 variables, plus O(n) for input array (which is required)
    If using vector for prices, it's O(n) total, but algorithm itself is O(1) extra.

6. CORRECTIONS DONE IN YOUR CODE:

    a) #include <Iostream> -> #include <iostream> C++ is case-sensitive.
    b) int prices[n]; -> VLA not standard. Use vector<int> prices(n); for safety.
    c) Added n==0 check -> If user enters 0 days, prices[0] will crash. Always check edge case.
    d) Braces: Your for loop had extra indent. Formatted.

7. INTERVIEW TIP:
    This is the BEST approach. Never propose brute force first.
    Follow-up questions:
    - Buy Sell Stock II (Multiple transactions allowed) -> Just add all positive differences.
    - Buy Sell Stock with Cooldown / Fee -> DP.

*/