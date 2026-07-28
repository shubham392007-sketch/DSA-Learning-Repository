// Pair sum(sorted array) - brute force approach
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

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] + array[j] == target)
            {
                vec_1.push_back(array[i]);
                vec_1.push_back(array[j]);
            }
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
    Find all pairs in array whose sum equals target.
    Example: array = [1,2,3,4], target=5 -> Pairs are (1,4) and (2,3) because 1+4=5, 2+3=5.

2. INPUT PART:
    - Takes n, array elements, and target value from user.
    - Prints the array.

3. STORAGE FOR ANSWER:
    vector<int> vec_1;
    - You are using a vector to store pairs that match target.
    - If (array[i], array[j]) matches, you push both into vec_1.
    - Example: If pairs are (1,4) and (2,3), vec_1 will be [1,4,2,3]
    - Note: This is okay but not ideal. Better to print directly or use vector<pair<int,int>>.

4. CORE LOGIC - BRUTE FORCE - 2 NESTED LOOPS:

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] + array[j] == target)
            {
                vec_1.push_back(array[i]);
                vec_1.push_back(array[j]);
            }
        }
    }

    - Outer loop i = 0 to n-1 -> Picks first element of pair.
    - Inner loop j = i+1 to n-1 -> Picks second element of pair.
    - j = i+1 ensures: a) You don't pair element with itself (i!= j)
                      b) You don't repeat same pair twice (avoid (1,4) and (4,1))
    - If sum == target, store the pair.

5. DRY RUN: array = [1,2,3,4], target=5, n=4

    i=0 (1):
      j=1 (2): 1+2=3!=5
      j=2 (3): 1+3=4!=5
      j=3 (4): 1+4=5 ==5 -> push 1,4 -> vec_1=[1,4]
    i=1 (2):
      j=2 (3): 2+3=5 ==5 -> push 2,3 -> vec_1=[1,4,2,3]
      j=3 (4): 2+4=6!=5
    i=2 (3):
      j=3 (4): 3+4=7!=5
    i=3: inner loop doesn't run.

    Final vec_1 = [1,4,2,3]

6. TIME COMPLEXITY:
    - O(n^2) -> Because 2 nested loops.
    - For n=1000, checks ~500k pairs.
    - This is called Brute Force because you check every possible pair.

7. PROBLEMS / BUGS IN THIS CODE:

    a) Output format: If no pair found, vec_1 will be empty, but you still print message
       "The pair whose sum is...". Should check if vec_1.empty().

    b) Logic for storing: If multiple pairs exist, your output will be confusing.
       Output: "1 4 2 3" -> User won't know if it's pair (1,4) (2,3) or (1,4,2) etc.
       Better to print as: (1,4) (2,3)

    c) int array[n]; -> Not standard C++. Use vector<int> array(n).

    d) Title says "sorted array" but you don't use sorting advantage. This brute force works for ANY array, sorted or unsorted.

8. WHAT IS THE OPTIMIZED WAY? - Two Pointer (O(n))
    Since your title says "sorted array", there is a better method:

    If array is sorted: [1,2,3,4]
    left=0 (1), right=n-1 (4), target=5
    sum = 1+4=5 == target -> Found
    If sum < target, left++
    If sum > target, right--

    This is O(n) time vs your O(n^2). This is the expected optimal solution for sorted array in interviews.

    Code for optimal:
    int left=0, right=n-1;
    while(left < right){
        int sum = array[left]+array[right];
        if(sum==target){ cout<<array[left]<<","<<array[right]; left++; right--; }
        else if(sum < target) left++;
        else right--;
    }

9. OUTPUT OF YOUR CODE:
    For input [1,2,3,4] target 5:
    The pair whose sum is equal to target value 5 is: 1 4 2 3

*/