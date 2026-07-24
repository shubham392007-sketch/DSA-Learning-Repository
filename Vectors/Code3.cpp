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