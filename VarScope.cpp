/**VarScope.cpp
 * + Left with intentional errors to demonstrate the limits of local
 *      global variables.
 */
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int foo; //Global Variables

int some_function () {
    int bar;    // Local Varibale
    bar = 0;
}

int other_function() {
    foo = 1; /**Accecptable as it is a global variable. */
    bar = 2; /**Incorrect as it is a local variable and cannot */
}

int main() {
    cout << "I grew up in a mansion." << endl;
    return 1;
}