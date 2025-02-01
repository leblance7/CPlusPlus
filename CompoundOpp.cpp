#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b = 3;
    int x, y, price, units = 0;
    a = b;
    a += 2;
    cout << "a: " << a << endl;

    /**Expression equivalencies
     */
    y += x; // y = y + x;
    cout << "y += x " << x << endl; 
    x -= 5; // x = x - 5;
    cout << "x -= 5: " << x << endl; 
    x /= y; // x = x / y;
    cout << "x /= y; " << x << endl;
    price *= units + 1; // price = price * (units + 1);
    cout << "price *= units + 1; " << price << endl;
    return 0;
}
