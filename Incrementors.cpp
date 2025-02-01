#include <iostream>
#include <string>
using namespace std;

int main() {
    int x = 0;
    cout << "x: " << x << "\n";
    ++x; // pre - increment
    cout << "++x: " << x << endl;
    x += 1; // assignment operator
    cout << "x += 1: " << x << endl;
    x = x + 1; // traditional math method
    cout << "x + x + 1: " << x << endl;
    cout << "This shows three different ways to increment" 
        " intergers." << endl; 
    cout << "+++++++++++++++++++" << endl;

    /**This portion of the code contains examples of pre and post
     *      incrementors.
     */
    /**Pre-Incrementors */
    int a, b = 0;
    a = 3; 
    cout << "pre incrementors\na: " << a << ",\t b: " << b << endl;
    b = ++a; //a:3, b: 3; // Assigns and increments
    cout << "++a :" << a << ",\tb: " << b << endl;

    /**Post - Incrementors */
    cout << "Post incrementors" << endl;
    int c, d = 0;
    c = 3;
    cout << "c: " << c << ",\td: " << d << endl;
    d = c++;
    cout << "c: " << c << ",\td = c++: " << d << endl;
    return 0;
}