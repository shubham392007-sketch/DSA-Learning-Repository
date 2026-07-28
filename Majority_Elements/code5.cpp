//Majority elements - Moore's Algorithm
#include <iostream>
#include <vector>
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

    int frequency = 0;
    int answer = 0;

    for (int i = 0; i < n; i++)
    {
        if(frequency == 0)
        {
            answer = vec[i];
        }
        if(answer == vec[i])
        {
            frequency ++;
        }
        else
        {
            frequency--;
        }
    }
    cout << "The array with majority element is :" << answer;
    return 0;
}

/*
EXPLANATION OF THE CODE:

1. GOAL OF THE CODE:
    Find Majority Element using BOYER-MOORE VOTING ALGORITHM.
    This is the OPTIMAL solution for LeetCode 169. Majority Element.
    Time: O(n), Space: O(1) - Best possible!

2. WHAT IS THE IDEA OF MOORE'S ALGORITHM?
    - Think of it as an election.
    - Majority element occurs > n/2 times, so it will survive even if all other elements vote against it.
    - Logic: Cancel out different elements. If count becomes 0, pick a new candidate.
    - At the end, the candidate who survives is the majority.

    Analogy: Imagine people voting.
    - You keep a candidate (answer) and his vote count (frequency).
    - If count is 0, make current person the new candidate.
    - If next person is same as candidate, increase votes (frequency++).
    - If different, decrease votes (frequency--) -> they cancel each other.
    - Since majority > n/2, it will have leftover votes at the end.

3. CORE LOGIC:

    int frequency = 0;
    int answer = 0;

    for (int i = 0; i < n; i++)
    {
        if(frequency == 0) // No candidate, make current element candidate
        {
            answer = vec[i];
        }
        if(answer == vec[i]) // Same as candidate? Increase vote
        {
            frequency ++;
        }
        else // Different? Decrease vote (cancel out)
        {
            frequency--;
        }
    }

4. DRY RUN: vec = [2,2,1,1,1,2,2], n=7

    Start: freq=0, ans=0

    i=0, val=2: freq==0 -> ans=2. ans==val(2==2) -> freq=1. [ans=2, freq=1]
    i=1, val=2: freq!=0. ans==val(2==2) -> freq=2. [ans=2, freq=2]
    i=2, val=1: freq!=0. ans!=val(2!=1) -> freq=1. [ans=2, freq=1]
    i=3, val=1: freq!=0. ans!=val(2!=1) -> freq=0. [ans=2, freq=0]
    i=4, val=1: freq==0 -> ans=1. ans==val(1==1) -> freq=1. [ans=1, freq=1]
    i=5, val=2: freq!=0. ans!=val(1!=2) -> freq=0. [ans=1, freq=0]
    i=6, val=2: freq==0 -> ans=2. ans==val(2==2) -> freq=1. [ans=2, freq=1]

    Loop ends. answer=2 which is correct majority.

5. ANOTHER DRY RUN: [1,1,2,2,2]

    i0=1: freq0->ans1 freq1
    i1=1: freq2
    i2=2: freq1
    i3=2: freq0
    i4=2: freq0->ans2 freq1 -> answer 2 correct.

6. TIME & SPACE COMPLEXITY:
    - Time: O(n) -> Single loop.
    - Space: O(1) -> Only 2 variables freq and ans. You are using extra vector O(n) but you can do without it.
    - This is OPTIMAL. This is what FAANG interviewers expect.

7. IMPORTANT BUG / MISSING STEP IN YOUR CODE:

    This code works ONLY IF it is guaranteed that majority element always exists (LeetCode guarantees it).

    But if there might be NO majority, you MUST do a 2nd pass to verify.
    Example: [1,2,3] -> Your code will return 3 (last candidate) but actually there is no majority.

    To make it 100% correct for any input, add verification:

    int count = 0;
    for(int v: vec) if(v==answer) count++;
    if(count > n/2) cout << answer;
    else cout << "No majority";

    Without this verification, for general arrays your code can give wrong answer.

8. COMPARISON OF ALL 4 METHODS YOU LEARNED:

    Method 1: Brute Force (2 loops count freq) -> O(n^2) Time, O(1) Space
    Method 2: Sorting + Counting -> O(n log n) Time, O(n) Space (your prev code)
    Method 3: Sorting Shortcut vec[n/2] -> O(n log n) Time, O(1) Space, only if majority guaranteed
    Method 4: Moore's Voting (This code) -> O(n) Time, O(1) Space -> BEST

9. SMALL IMPROVEMENTS:

    a) int array[n] -> Not standard. Use vector<int> vec(n) directly.
    b) No need to convert array to vector. Just take input in vector from start.
    c) Initialize answer properly, but freq=0 logic handles it.

10. FINAL OUTPUT:
    Input: [2,2,1,1,1,2,2]
    Output: The array with majority element is :2
*/