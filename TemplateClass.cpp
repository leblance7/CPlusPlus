#include <iostream>
#include <sstream>
#include <string>
using namespace std;

/**Template and clas are keywords that must be defined to use
 *      templates.
 */
template <class T>

T draw (T a, T b) {
    T drawn;
    drawn = a + b;
    return drawn;
}

int main() {
    int i = 4, j = 6.0, k;
    double f = 2.0, g = 5.0, h;
    k = draw<int>(i, j);
    h = draw<double>(f, g); 
    /**Alternate way to call templates.
     * 
     * k = drawn(i, j);
     * h = drawn(f, g);
     */
    cout << k << " cards were drawn." << endl;
    cout << h << " cards were drawn." << endl;
    return 1;
}