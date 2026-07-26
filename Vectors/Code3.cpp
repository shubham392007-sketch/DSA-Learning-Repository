#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char> char_vector = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    vector<int> int_vector = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << "Size of Character Vector: " << char_vector.size() << endl;
    cout << "Size of Integer Vector: " << int_vector.size() << endl;

    char_vector.push_back('i');
    int_vector.push_back(10);

    for (char i : char_vector)
    {
        cout << i << endl;
    }
    cout << "----------------------------------------------------";

    for (int i : int_vector)
    {
        cout << i << endl;
    }

    cout << "Size of Character Vector: " << char_vector.size() << endl;
    cout << "Size of Integer Vector: " << int_vector.size() << endl;

    char_vector.pop_back();
    int_vector.pop_back();

    for (char i : char_vector)
    {
        cout << i << endl;
    }
    cout << "----------------------------------------------------";

    for (int i : int_vector)
    {
        cout << i << endl;
    }
    cout << "Size of Character Vector: " << char_vector.size() << endl;
    cout << "Size of Integer Vector: " << int_vector.size() << endl;

    cout << "Value at the front of Char vector: " << char_vector.front() << endl;
    cout << "Value at the front of Int vector: " << int_vector.front() << endl;

    cout << "Value at the back of Char vector: " << char_vector.back() << endl;
    cout << "Value at the front of Int vector: " << int_vector.back() << endl;

    cout << "Values at specific position in Char vector: " << char_vector.at(0) << " " << char_vector.at(3) << endl;
    cout << "Values at specific position in Int vector: " << int_vector.at(0) << " " << int_vector.at(3) << endl;

    return 0;
}

/*
EXPLANATION OF THE CODE:

1. GOAL OF THE CODE:
    This program demonstrates the most important and commonly used functions of a Vector in C++:
    size(), push_back(), pop_back(), front(), back(), at().

2. INITIAL DECLARATION:
    vector<char> char_vector = {'a','b','c','d','e','f','g','h'}; -> Size = 8
    vector<int> int_vector = {1,2,3,4,5,6,7,8,9}; -> Size = 9

3. FUNCTION 1:.size()
    cout << char_vector.size() << endl;
    cout << int_vector.size() << endl;
    - size() returns the current number of elements in the vector.
    - Output here: 8 and 9.
    - Note: size() is dynamic, it changes after push/pop.

4. FUNCTION 2:.push_back(value)
    char_vector.push_back('i');
    int_vector.push_back(10);
    - Adds a new element at the END of the vector.
    - This is why vector is called dynamic array - arrays cannot do this.
    - After this:
      char_vector becomes [a,b,c,d,e,f,g,h,i] -> Size 9
      int_vector becomes [1,2,3,4,5,6,7,8,9,10] -> Size 10
    - You then print them with for-each loop and print size again to prove size increased.

5. FUNCTION 3:.pop_back()
    char_vector.pop_back();
    int_vector.pop_back();
    - Removes the LAST element from the vector. No parameter needed.
    - After this:
      char_vector becomes [a,b,c,d,e,f,g,h] -> Size 8 again (i removed)
      int_vector becomes [1,2,3,4,5,6,7,8,9] -> Size 9 again (10 removed)
    - You print them again and print size to show it decreased.

6. FUNCTION 4:.front()
    cout << char_vector.front() << endl;
    cout << int_vector.front() << endl;
    - Returns the FIRST element of the vector.
    - char_vector.front() = 'a'
    - int_vector.front() = 1
    - Same as vector[0] but more readable.

7. FUNCTION 5:.back()
    cout << char_vector.back() << endl;
    cout << int_vector.back() << endl;
    - Returns the LAST element of the vector.
    - char_vector.back() = 'h'
    - int_vector.back() = 9
    - Small Bug in your cout message: You wrote "Value at the front of Int vector" but you are calling.back().
      It should be "Value at the back of Int vector".

8. FUNCTION 6:.at(index)
    cout << char_vector.at(0) << " " << char_vector.at(3) << endl;
    cout << int_vector.at(0) << " " << int_vector.at(3) << endl;
    -.at(index) returns element at that specific index.
    - char_vector.at(0) = 'a', at(3) = 'd' -> Output: a d
    - int_vector.at(0) = 1, at(3) = 4 -> Output: 1 4
    - Difference between at() and []:
      vector[100] -> If index invalid, gives garbage value / undefined behavior (dangerous).
      vector.at(100) -> If index invalid, throws an exception and program safely stops. Safer for beginners.

9. SUMMARY OF VECTOR FUNCTIONS LEARNED:
    - size() -> get current size
    - push_back(x) -> add x at end
    - pop_back() -> remove last element
    - front() -> get first element
    - back() -> get last element
    - at(i) -> get element at index i safely

10. FLOW IN SHORT:
    Create [a-h] and [1-9] -> print size 8,9 -> push i,10 -> print [a-i], [1-10] -> print size 9,10
    -> pop -> print [a-h], [1-9] -> print size 8,9 -> print front (a,1) -> print back (h,9) -> print at(0) & at(3).
*/