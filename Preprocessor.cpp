#include <iostream>
#include <string>
using namespace std;

/** Replacement identifiers: identifiers syntax are replaced with
 *      any syntax of characters. Untill the end of the line.
 *      - The is performed by the preprocessors 
 *          and happends before the program is compiled.
 *      - Causing a sort of blind replacement the validity of
 *          syntax invloved is not checked in any way.
 * 
 *       + #"define" lines are proprocessor directive, single-line 
 *          instructions that go before the main function.
 *      + If semicolin is included in the line,
 *          it is apart of replacement sequence and is included in all 
 *          replaced occurrences.
 */

#define PI 3.14159
#define NEWLINE '\n'

int main() {
        double r = 5.0;
        double circle;

        /**Circumference formula */
        circle = 2 * PI * r;
        cout << circle;
        cout << NEWLINE;

    return 0;
}
