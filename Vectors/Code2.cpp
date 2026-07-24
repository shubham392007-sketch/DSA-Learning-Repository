#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char> char_vector = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};

    for (char i : char_vector)
    {
        cout << i << endl;
    }
    cout << "----------------------------------------------------";
    vector<int> int_vector = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i : int_vector)
    {
        cout << i << endl;
    }
    return 0;
}

/*
EXPLANATION OF THE CODE:

1. GOAL OF THE CODE:
    This program shows how to create vectors of different data types (char and int)
    and how to print them using a for-each (range-based for) loop.

2. VECTOR OF CHAR:
    vector<char> char_vector = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    - Creates a vector that stores characters.
    - Size is 8.
    - Stores: [a, b, c, d, e, f, g, h]

3. RANGE-BASED FOR LOOP (For-Each Loop):
    for (char i : char_vector)
    {
        cout << i << endl;
    }

    - This is a modern and cleaner way to loop introduced in C++11.
    - It reads as: "for each character i in char_vector, do this".
    - How it works:
      1st iteration: i = 'a' -> prints a
      2nd iteration: i = 'b' -> prints b
     ...
      8th iteration: i = 'h' -> prints h

    - Breakdown:
      char i -> temporary variable that will hold each element one by one.
      : -> means "in"
      char_vector -> the vector we are looping over.

    - Advantage over normal for loop:
      Normal: for(int j=0; j<char_vector.size(); j++) { cout << char_vector[j]; }
      For-Each: for(char i : char_vector) { cout << i; }
      Shorter, no need to manage index, less chance of error.

4. SEPARATOR LINE:
    cout << "----------------------------------------------------";
    - Just prints a line to separate the two outputs.
    - Small Bug: You didn't add << endl; after this, so the next number 1 will be printed
      in the same line as the dashes.
      Output will be like:
     ...
      h
      ----------------------------------------------------1
      2...
      To fix: cout << "----------------------------------------------------" << endl;

5. VECTOR OF INT:
    vector<int> int_vector = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    - Same concept but stores integers.
    - [1, 2, 3, 4, 5, 6, 7, 8, 9]

    for (int i : int_vector)
    {
        cout << i << endl;
    }
    - Again for-each loop. This time i is of type int.
    - Prints 1 to 9 each on new line.

6. FLOW OF PROGRAM:
    - Creates char_vector -> Prints a to h line by line.
    - Prints ---- line.
    - Creates int_vector -> Prints 1 to 9 line by line.

7. KEY LEARNING:
    - Vector can be of any data type: int, char, float, string, etc.
    - Range-based for loop works for any collection (array, vector, string).
    - Syntax is always: for ( DataType variable : collection ) {... }

    Example for string:
    vector<string> names = {"Shubham", "Ram"};
    for (string name : names) { cout << name << endl; }
*/