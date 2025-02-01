#include <iostream>
#include <string>
#include <sstream>
using namespace std;
/**Switch Statements
 * - Syntax uses conatenated version of if-else statments that are
 *      limited to constant expressions.
 * - Switch evaluates the expression and checks if equal to
 *      constant - 1 then executes group - of - statements - 1.
 *      And so on until the switch case finds a break in the statement.
 */
int main() {    
    int i;
    cout << "Enter in a number please: ";
    cin >> i;
    switch (i) {
        case 1:
            cout << "i is 1 and the pokemon you chose was\
 charmander." << endl;
            break;
        case 2:
            cout << "i is 2 and the pokemon you chose was\
 bulbasaur." << endl;
            break;
        case 3:
            cout << "i is 3 and the pokemon you chose\
 was squirtle." << endl;
            break;
        default:
            cout << "The number you chose was not 1, 2, or 3.";
    }
    // cout << "Howdy" << endl;
    return 1;
}