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