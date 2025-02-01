#include <iostream>
#include <string>
#include <sstream>
using namespace std;
/** Creating the template for generic class
 * class: */
template <class T, class U>

/**Generic Method:  */
// T sum (T a, T b) {
//     T result = a + b;
//     return result;
// }
bool are_equal (T var1, U var2) {
    return (var1 == var2);
}

int main() {
    /**Testing sum method for generic types */
    int x = 20, y = 44;
    double w = .308, v = .44;
    // cout << sum(x, y) << endl;
    // cout << sum(w , v) << endl;

    /** Testing is equal method: */
    string var1 = "Howdy", var2 = "Hello";
    const char Texan[6] = "Howdy";
    cout << are_equal(var1, var2) << "\n";
    cout << are_equal(var1, Texan) << "\n";
    return 1;
}