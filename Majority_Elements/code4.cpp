// Majority elements - brute force - optimized sorting
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements you want to enter in array: ";
    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value at index " << i << " : ";
        cin >> array[i];
    }
    cout << "Your array is is: ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    // converting your array into vector
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        vec.push_back(array[i]);
    }

    sort(vec.begin(), vec.end());
    int frequency = 1, answer = vec[0];
    bool found = false;

    // check if first element itself is majority when n=1
    if (n == 1) {
        cout << "The array with majority element is :" << answer;
        return 0;
    }

    for( int i = 1; i < n; i++)
    {
        if(vec[i] == vec[i-1])
        {
            frequency++;
        }
        else
        {
            frequency = 1;
            answer = vec[i];
        }

        if(frequency > n/2)
        {
            cout << "The array with majority element is :" << answer;
            found = true;
            break;
        }
    }

    if(!found && frequency <= n/2)
    {
        // optional: if no majority found
        // cout << "No majority element found";
    }

    return 0;
}

/*
EXPLANATION OF THE CODE:

1. GOAL OF THE CODE:
    Find Majority Element using SORTING approach.
    This is better than your previous O(n^2) brute force.
    Complexity: O(n log n) due to sorting.

2. WHY SORTING HELPS FOR MAJORITY?
    - If you sort array, all same elements come together.
    - Example: [2,2,1,1,1,2,2] -> after sort -> [1,1,1,2,2,2,2]
    - Now counting frequency is easy in one single pass O(n).
    - Also, there is a SUPER SHORTCUT: After sorting, majority element will ALWAYS be at index n/2.
      Why? Because it occupies more than n/2 positions, so it must cross the middle.
      Example: n=7, middle=3. Sorted [1,1,1,2,2,2,2], vec[3]=2 which is majority.
      But your code uses the frequency counting method, not the shortcut, which is also valid.

3. STEP-BY-STEP LOGIC:

    sort(vec.begin(), vec.end()); -> Sorts vector in ascending order.
    Example: [2,1,2,1,2] -> [1,1,2,2,2]

    int frequency = 1, answer = vec[0]; -> Start assuming first element is candidate, freq=1
    bool found = false; -> Flag to check if majority found.

    Edge Case n==1:
    if(n==1) -> If only one element, it is automatically majority. Print and exit.

    Main Loop:
    for(int i=1; i<n; i++) // Start from 2nd element (index 1) and compare with previous
    {
        if(vec[i] == vec[i-1]) // Same as previous? Increase frequency
        {
            frequency++;
        }
        else // Different element? Reset frequency to 1 and update answer to current element
        {
            frequency = 1;
            answer = vec[i];
        }

        if(frequency > n/2) // After each increment, check if > n/2
        {
            print answer, found=true, break;
        }
    }

4. DRY RUN: vec = [1,1,2,2,2], n=5, n/2=2

    After sort: [1,1,2,2,2]
    frequency=1, answer=1 (vec[0])

    i=1: vec[1]=1, vec[0]=1 -> same -> frequency=2, answer=1. freq 2 > 2? No (needs >2)
    i=2: vec[2]=2, vec[1]=1 -> different -> frequency=1, answer=2. 1 >2? No
    i=3: vec[3]=2, vec[2]=2 -> same -> frequency=2, answer=2. 2 >2? No
    i=4: vec[4]=2, vec[3]=2 -> same -> frequency=3, answer=2. 3 >2? YES -> Print 2. Found.

5. TIME & SPACE COMPLEXITY:
    - Time: O(n log n) for sort + O(n) for loop = O(n log n) total.
    - Space: O(n) because you made extra vector (you could sort array directly to make O(1) extra)
    - Better than O(n^2) brute force, but not best.
    - Best is Boyer-Moore Voting: O(n) time, O(1) space.

6. IMPROVEMENTS / BUGS:

    a) Extra Conversion:
       You took input in int array[n] then converted to vector. Why?
       You can directly do: vector<int> vec(n); cin>>vec[i]; Then sort(vec.begin(), vec.end());
       Saves code and memory.

    b) The Shortcut you missed (Interview trick):
       After sorting, you don't need frequency loop at all.
       Just: cout << vec[n/2]; -> This is majority if it is guaranteed to exist.
       Your code is more general because it checks frequency and handles "no majority" case.

    c) Your no-majority handling is incomplete:
       if(!found && frequency <= n/2) { // commented out }
       You should uncomment and print "No majority found". Otherwise program prints nothing if no majority.

    d) VLA: int array[n]; is not standard C++. Use vector.

    e) Naming: Title says "brute force - optimized sorting" - Actually this is "Better Approach" or "Sorting Approach".
       Brute force was O(n^2). This is O(n log n).

7. COMPARISON OF ALL MAJORITY APPROACHES:
    - Brute Force (freq count with 2 loops): O(n^2) time, O(1) space
    - Sorting + Counting (Your current code): O(n log n) time, O(1)/O(n) space
    - Sorting Shortcut (vec[n/2]): O(n log n) time, O(1) space, only if majority guaranteed
    - Hash Map: O(n) time, O(n) space
    - Boyer-Moore Voting: O(n) time, O(1) space -> OPTIMAL

*/