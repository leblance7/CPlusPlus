#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b;   // a:?, b:?
    a = 10;     // a:10, b:?
    b = 4;      // a:10, b:4
    a = b;      // a:4, b:4;
    b = 7;      //a:4, b:7
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
}
/** The assignment of variables and the overassignment of the
 *      same variables from left to right.
 *      + As on #9 a = b; at the start a = 10 and b = 4.
 *          a is then assigned to the value of b overwriting 10
 *           to the variable a.
 *      + However, the b variable remains the same untill on line #10
 *          be is then newly assigned to the int value 7; 
 */

/**Example of valid statement in c++
 * int x, y, z;
 * x = y = z = 5;
 * ++ Assigns 5 to all three varibles x, y, and z from right to left.
 */