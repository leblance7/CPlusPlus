#include <iostream>
#include <string>
using namespace std;
/**Ternary Operators Examples
 * 4 : 3
 * (4 == true);
 * (3 == false);
 */

int main() {
    int ternary = 0;
    int a = 8; // true
    int b = 17; // false
    cout << "(4 == true) && (3 == false): Ternary Operators" << endl;
    cout << "4: true\t3:false" << endl; 
    ternary = 7 == 5 ? 4 : 3;
    cout << "ternary: " << ternary << endl;
    ternary =  5 > 3 ? a : b;
    cout  << "ternary: " << ternary << endl;
    ternary = a > b ? a : b;
    cout << "ternary:  " << ternary << endl;
    return 0;
}