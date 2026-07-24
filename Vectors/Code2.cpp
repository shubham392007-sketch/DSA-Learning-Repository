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