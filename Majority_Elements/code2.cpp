// Pair sum(sorted array) - two pointer approach - optimal method
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
    vector<int> vec_1;
    int target;
    cout << "Enter your target value which must be the sum of the pairs present in array: ";
    cin >> target;

    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int pair_sum = array[i] + array[j];

        if (pair_sum > target)
        {
            j--; // sum too big, decrease right pointer
        }
        else if (pair_sum < target)
        {
            i++; // sum too small, increase left pointer
        }
        else
        {
            vec_1.push_back(array[i]);
            vec_1.push_back(array[j]);
            i++;
            j--; // move both after finding a pair
        }
    }

    cout << "The pair whose sum is equal to target value " << target << " is: ";
    for (int val : vec_1)
    {
        cout << val << " ";
    }
    return 0;
}

/*
EXPLANATION OF THE CODE:

1. GOAL OF THE CODE:
    Find pairs whose sum = target, but now using TWO POINTER - the most optimal method.
    This method ONLY WORKS IF ARRAY IS SORTED (ascending). This is LeetCode 167. Two Sum II.

2. WHY THIS IS BETTER THAN BRUTE FORCE?
    - Brute Force: 2 nested loops, checks all pairs -> O(n^2) time.
    - Two Pointer: Single while loop -> O(n) time.
    - For n=10000, brute force does ~50M checks, two pointer does ~10k checks. Huge difference!

3. CORE IDEA OF TWO POINTER:

    - Take two pointers: i = start (0), j = end (n-1).
    - Array is sorted, so array[i] is smallest, array[j] is largest.
    - Calculate pair_sum = array[i] + array[j].

    - 3 Cases:
      a) pair_sum == target -> Found a pair! Store it, then move both i++ and j-- to find next pair.
      b) pair_sum > target -> Sum is too BIG. Since array is sorted, to make sum smaller we need smaller number.
         Which pointer to move? j is at larger side, so j-- (decrease).
      c) pair_sum < target -> Sum is too SMALL. We need bigger number, so i++ (increase).

4. DRY RUN: array = [1,2,3,4,5], target = 6, n=5
    Initial: i=0(1), j=4(5)

    Step 1: pair_sum = 1+5=6 == target -> Found (1,5). vec_1=[1,5]. i=1, j=3
    Step 2: i=1(2), j=3(4). pair_sum=2+4=6 == target -> Found (2,4). vec_1=[1,5,2,4]. i=2, j=2
    Step 3: i=2, j=2 -> i<j false, loop stops.

    Output: 1 5 2 4

    Another DRY RUN: array=[1,2,3,4,4], target=8
    i=0(1), j=4(4): sum=5<8 -> i++ (need bigger)
    i=1(2), j=4(4): sum=6<8 -> i++
    i=2(3), j=4(4): sum=7<8 -> i++
    i=3(4), j=4(4): sum=8==8 -> Found (4,4). vec=[4,4]. i=4,j=3 stop.

5. WHY SORTED IS NECESSARY?
    If array is not sorted, say [4,1,3,2], target=5
    i=0(4), j=3(2): sum=6>5 -> you do j-- -> j=2(3): sum=7>5 -> j-- -> j=1(1): sum=5==5 found (4,1) okay.
    But try [2,5,3,4] target=6
    i=0(2), j=3(4): sum=6 found (2,4) but you miss (3,3)? Actually not present.
    Many cases will fail. Logic of increasing/decreasing only works when sorted.

    So always sort first if not sorted: sort(array, array+n);

6. LINE-BY-LINE:
    int i=0; int j=n-1; -> Two pointers.
    while(i<j) -> Continue till they cross. i<j ensures not using same element twice.

    if(pair_sum > target) j--; -> Sum too large, make it smaller.
    else if(pair_sum < target) i++; -> Sum too small, make it larger.
    else -> Found, push both and move both.

7. TIME & SPACE COMPLEXITY:
    - Time: O(n) for two-pointer loop + O(n) for input -> O(n) total. Optimal!
    - Space: O(k) where k is number of pairs found (for vec_1). Otherwise O(1) if you print directly.

8. IMPROVEMENTS / BUGS:

    a) int array[n]; -> Not standard. Use vector<int> array(n);

    b) Your code finds ALL pairs. In LeetCode Two Sum II, they ask to find only ONE pair and return indices.
       For that, you would return as soon as you find first match, not continue.

    c) Output formatting: Again prints "1 5 2 4" confusingly. Better print as (1,5) (2,4).

    d) Duplicate handling: If array has duplicates like [1,1,2,3,3], your i++;j--; will find (1,3) twice.
       If you want unique pairs only, you should skip duplicates after finding.

    e) If no pair found, vec_1 empty -> Should show "No pair found" message.

9. INTERVIEW TIP:
    - If interviewer says "Array is sorted, find pair sum = target", immediately think TWO POINTER.
    - If array is UNSORTED, best way is Hash Map -> O(n) time.
    - Brute Force O(n^2) is only for explanation, never use in interview as final answer.
*/