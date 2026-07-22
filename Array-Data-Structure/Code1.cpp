#include <iostream>
using namespace std;

int main()
{
    int marks[5] = {23,45,67,89,9};
    cout << marks[0] << endl;
    cout << marks[1] << endl;
     cout << marks[2] << endl;
    cout << marks[3] << endl;
     cout << marks[4] << endl;

    return 0;
}

/*
EXPLANATION OF THE CODE:

1. GOAL OF THE CODE:
    This program shows the basic declaration, initialization and accessing of an Array in C++.

2. WHAT IS AN ARRAY?
    An array is a collection of similar data type elements stored in contiguous memory
    locations. Here it stores 5 integers (marks).

3. DECLARATION AND INITIALIZATION:
    int marks[5] = {23,45,67,89,9};

    - int: Type of data the array will store (integer).
    - marks: Name of the array.
    - [5]: Size of the array - it can store 5 elements.
    - {23,45,67,89,9}: The values inside the array. These are called elements.

    How it is stored in memory with index:
    Index: 0 1 2 3 4
    Value: 23 45 67 89 9
    Address: 100 104 108 112 116 (example, each int takes 4 bytes)

    NOTE: Array indexing always starts from 0, not 1.

4. ACCESSING ELEMENTS:
    - marks[0] gives the first element -> 23
    - marks[1] gives the second element -> 45
    - marks[2] -> 67
    - marks[3] -> 89
    - marks[4] -> 9

    cout << marks[i] << endl; prints the element at ith index and endl moves to next line.

5. FLOW OF PROGRAM:
    - Creates an array of 5 integers.
    - Prints each element one by one using cout.

6. BETTER WAY TO WRITE THIS:
    Instead of writing 5 cout lines, you can use a loop. This is the real power of arrays.

    for(int i=0; i<5; i++) {
        cout << marks[i] << endl;
    }

    This will give the exact same output but with less code and works for any size.
*/