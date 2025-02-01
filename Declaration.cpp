#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // varaibles
    int a, b, result;

    // process
    a = 5;
    cout << "A: " <<  a << endl;
    /**
     * endl : has a different function than newline \n
     *      but I can't remember what specifically.
     * + " << ", are used and ending and separators.
     */     
    b = 2;
    cout << "b: " << b << endl;
    a = a + 1;
    cout << "a = a + 1: " << a << endl;
    result = a - b;
    cout << "a - b:     " << result << endl;

    /**terminating the program. */
    return 0;

}