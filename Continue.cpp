#include <iostream>
#include <string> 
#include <sstream>
using namespace std;

/**The Continue Statement
 * - Causes the program to skip the rest of the current iteration, 
 *      then jumping to the next iteration in the sequence.
 */
int main() {
    for( int n = 10; n > 0; n-- ) {
        if (n == 5)
            continue;
        cout << n << ", ";
    }
    cout << "liftoff!\n";
    // cout << "To go even further beyond . . . Plus Ultra!" << endl;
    return 1;
}