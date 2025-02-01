#include <iostream>
#include<string>
using namespace std;

/**Constant global variables
 */
const double pi = 3.14159;
const char newline = '\n';

int main () {
/** Variables used to demonstate the concept of constants. */
    double r = 5.0;
    double circle;
/** Formula to find the circumference */
    circle = 2 * pi * r;
    cout << circle;
    cout << newline;
    return 0;
}