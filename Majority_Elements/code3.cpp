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

    for (int value : vec)
    {
        int frequency = 0;
        for (int equal : vec)
        {
            if (value == equal)
            {
                frequency++;
            }
        }
         if(frequency > n/2)
         {
            cout << "The array with majority element is :" << value;
            break;
         }
    }
    return 0;
}

/*
EXPLANATION OF THE CODE:

1. GOAL OF THE CODE - LeetCode 169. Majority Element:
    Find the majority element.
    Majority element = element which appears more than n/2 times.
    Example: [2,2,1,1,1,2,2] -> n=7, n/2=3, 2 appears 4 times (>3) so majority is 2.
    It is guaranteed that majority always exists in LeetCode version.

2. INPUT AND CONVERSION PART:
    - You take array input from user.
    - Then you convert that array into vector<int> vec using push_back.
    - This conversion is extra work. You could directly use vector from start.
      Instead of int array[n]; you could do vector<int> vec(n); and take input directly into vec.

3. CORE LOGIC - BRUTE FORCE FREQUENCY COUNT:

    for (int value : vec) // Outer loop: Pick one element (value) to check
    {
        int frequency = 0;
        for (int equal : vec) // Inner loop: Count how many times 'value' appears in whole vector
        {
            if (value == equal)
            {
                frequency++;
            }
        }
         if(frequency > n/2) // Check if it is majority
         {
            cout << "The array with majority element is :" << value;
            break; // Found it, no need to check further
         }
    }

4. DRY RUN: array = [2, 2, 1, 1, 1, 2, 2], n=7, n/2=3

    Outer value=2 (first element):
      Inner loop counts: equal=2->freq1, 2->freq2, 1->no, 1->no, 1->no, 2->freq3, 2->freq4
      frequency=4
      4 > 3? YES -> Print "majority element is: 2" and break.

    If array was [1,1,2]:
    value=1: freq=2, 2 > 1.5? YES -> majority 1.

5. TIME COMPLEXITY - WHY THIS IS SLOW?
    - Outer loop runs n times.
    - Inner loop runs n times for each outer.
    - Total checks = n * n = n^2 -> O(n^2)
    - For n=10000, 100 million checks. Too slow for interviews.

6. BUGS / IMPROVEMENTS IN YOUR CODE:

    a) No output if no majority exists:
       If array = [1,2,3], there is no majority. Your loop will finish without printing anything.
       Should add a flag or print "No majority element".

    b) Duplicate checking:
       If array = [1,1,1,2,3], you will count frequency of 1 three times (for each 1).
       First 1 -> freq 3 -> found, break. Works, but wasteful.
       If you didn't break, you'd count same element again and again.

    c) int array[n]; -> VLA not standard C++. Use vector<int>.

    d) Message: "The array with majority element is :" should be "The majority element is:"

7. WHAT ARE BETTER APPROACHES? (Important for Interview)

    This O(n^2) is Brute Force.

    Approach 2: Sorting - O(n log n)
    - Sort array: [1,1,1,2,2,2,2] -> After sorting, majority element will always be at middle index n/2.
    - Why? Because it occupies more than half. So answer = sorted[n/2].
    - Code: sort(vec.begin(), vec.end()); cout << vec[n/2];

    Approach 3: Hash Map - O(n) time, O(n) space
    - Use unordered_map<int,int> to store frequency in one pass.
    - Then find whose freq > n/2.

    Approach 4: Boyer-Moore Voting Algorithm - O(n) time, O(1) space - BEST / OPTIMAL
    - This is the expected answer in FAANG interviews.
    - Idea: Cancel out different elements. Majority will survive.
    int freq=0, ans=0;
    for(int val: vec){
        if(freq==0) ans=val;
        if(ans==val) freq++;
        else freq--;
    }
    cout << ans;

    Dry run for [2,2,1,1,1,2,2]:
    val=2 freq=0->ans=2 freq=1
    val=2 ans=2 freq=2
    val=1 ans!=1 freq=1
    val=1 ans!=1 freq=0
    val=1 freq=0->ans=1 freq=1
    val=2 ans!=2 freq=0
    val=2 freq=0->ans=2 freq=1 -> Answer 2.

8. FINAL OUTPUT FOR YOUR CODE:
    Input: n=5, array=[2,2,2,1,3] -> n/2=2
    2 appears 3 times >2 -> Output: The array with majority element is :2

*/