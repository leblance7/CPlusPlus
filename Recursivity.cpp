/** Recursive methods
* - Recalled by the program until the condition is not met or
*       called to break by a certain condition.
* - This example is done using a factorial calculator.
*/
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

long factorial(long a) {
    if (a > 1) 
        return (a * factorial (a - 1));
    else
        return 1;
}

int main () {
    // cout << "Always bet on Hakari" << endl;
    long a;
    cout << "Enter a number for the factorial calculator. ";
    cin >> a;
    cout << a << "! = " << factorial(a) << endl;
    return 1;
}