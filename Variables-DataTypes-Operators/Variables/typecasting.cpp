#include <iostream>
using namespace std;

int main()
{
    double price = 200.99;
    int typecast_price = (int)price; // typecasting double to int
    cout << "Price: " << price << endl;
    cout << "Typecast price: " << typecast_price << endl; 
    return 0;
}