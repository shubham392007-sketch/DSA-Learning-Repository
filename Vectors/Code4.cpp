#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    return 0;
}

/*
EXPLANATION OF THE CODE:

1. GOAL OF THE CODE:
    This program shows the difference between two very confusing but important concepts of vector:
    size() vs capacity().

2. INITIAL DECLARATION:
    vector<int> vec;
    - Creates an empty vector. size=0, capacity=0 initially.

3. push_back() 6 TIMES:
    vec.push_back(0)...vec.push_back(5);
    - You add 6 elements one by one. Final vector is [0,1,2,3,4,5]

4. CONCEPT 1: size()
    cout << vec.size() << endl;
    - size() = How many elements are ACTUALLY present in the vector right now.
    - Here you inserted 6 elements, so size() will be 6.
    - Think of size as "number of filled seats".

5. CONCEPT 2: capacity()
    cout << vec.capacity() << endl;
    - capacity() = How many elements the vector CAN store without needing to allocate new memory.
    - This is the total storage reserved in memory internally.
    - Think of capacity as "total number of seats reserved".

6. WHY ARE size() AND capacity() DIFFERENT? - The Main Logic
    - Vector doesn't increase its memory by 1 every time you push.
      If it did, it would be very slow (reallocate memory every time).
    - Instead, it doubles its capacity when it gets full.

    - Step-by-step growth for your code (in most compilers like g++):
      Start: size=0, capacity=0

      push_back(0): size=1, capacity=1  (first time, allocates 1)
      push_back(1): size=2, capacity=2  (full, so double from 1 to 2)
      push_back(2): size=3, capacity=4  (full, so double from 2 to 4)
      push_back(3): size=4, capacity=4  (still has space)
      push_back(4): size=5, capacity=8  (full, so double from 4 to 8)
      push_back(5): size=6, capacity=8  (still has space)

    - So final output will be:
      size = 6
      capacity = 8

    - Note: Capacity doubling logic (1,2,4,8,16...) is implementation dependent. Some compilers use 1.5x growth.
      But size will ALWAYS be 6. Capacity will be >= 6.

7. ANALOGY TO REMEMBER:
    Imagine a bus.
    size = Number of passengers sitting right now = 6
    capacity = Total seats in bus = 8
    There are 2 empty seats still available, so bus doesn't need to buy a bigger bus yet.
    When 9th passenger comes, bus will buy a bigger bus with 16 seats.

8. WHY THIS IS IMPORTANT?
    - capacity >= size always.
    - Understanding this makes vector efficient. Pushing is O(1) on average.
    - If you know you will store 1000 elements, you can use vec.reserve(1000) to avoid many re-allocations.

9. OUTPUT OF YOUR CODE:
    6
    8

10. TRY THIS YOURSELF:
    Add these lines after each push_back to see growth:
    cout << "After push " << vec.back() << " size=" << vec.size() << " capacity=" << vec.capacity() << endl;
*/