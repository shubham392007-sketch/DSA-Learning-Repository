#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec_1;
    vector<int> vector_2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    vector<int> vector_3(5, 0);
    cout << vector_3[0] << endl;
    cout << vector_3[1] << endl;
    cout << vector_3[2] << endl;
    cout << vector_3[3] << endl;
    cout << vector_3[4] << endl;

    return 0;
}

/*
EXPLANATION OF THE CODE:

1. GOAL OF THE CODE:
    This program shows 3 different ways to declare and initialize a vector in C++.

2. WHAT IS A VECTOR?
    - A vector is like a dynamic array in C++.
    - Unlike a normal array int arr[5], where size is fixed, a vector can grow or shrink automatically at runtime.
    - It is part of the STL (Standard Template Library).
    - You need #include <vector> to use it.

3. LINE-BY-LINE EXPLANATION:

    a) vector<int> vec_1;
       - Declares an EMPTY vector of integers.
       - Size = 0 currently. No elements inside.
       - You can later add elements using vec_1.push_back(10);
       - In memory: []

    b) vector<int> vector_2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
       - Declares a vector and initializes it with 10 values using an initializer list.
       - This is same as creating an array with values.
       - Size = 10.
       - In memory: [1, 2, 3, 4, 5, 6, 7, 8, 9, 0]
       - Indexing is same as array: vector_2[0]=1, vector_2[1]=2... vector_2[9]=0

    c) vector<int> vector_3(5, 0);
       - This is a special constructor of vector.
       - Syntax: vector<int> name(count, value);
       - count = 5, value = 0
       - Means: Create a vector of size 5, and fill all 5 positions with 0.
       - In memory: [0, 0, 0, 0, 0]

    d) cout << vector_3[0] << endl;... vector_3[4]
       - Accessing elements of vector_3 like an array.
       - Since all elements are 0, it will print:
         0
         0
         0
         0

4. DIFFERENCE BETWEEN ARRAY AND VECTOR:
    Array: int arr[5] = {0}; -> Size fixed, cannot grow. Faster but less flexible.
    Vector: vector<int> v(5,0); -> Size dynamic, can do v.push_back(5) to make size 6.
             More flexible, handles memory automatically.

5. COMMON VECTOR FUNCTIONS (for your learning):
    - vec.push_back(x): Adds x at the end.
    - vec.pop_back(): Removes last element.
    - vec.size(): Returns number of elements.
    - vec.empty(): Checks if empty.
    - vec.clear(): Removes all elements.

    Example:
    vector_3.push_back(10); -> Now vector_3 becomes [0,0,0,10]

6. YOUR CODE OUTPUT:
    0
    0

7. IMPROVEMENT:
    Instead of 5 cout lines, you can use a loop (better practice):
    for(int i=0; i<vector_3.size(); i++) {
        cout << vector_3[i] << endl;
    }
    or range-based for loop:
    for(int val : vector_3) {
        cout << val << endl;
    }
*/