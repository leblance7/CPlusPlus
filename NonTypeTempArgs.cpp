#include <iostream>
#include <string> 
#include <sstream>
using namespace std;

template <class T, int N>
T fixed_multiply (T val) {
    return val * N;
}

int main() {
    cout << fixed_multiply<int,2>(10) << endl;
    cout << fixed_multiply<int,3>(10) << endl;
    cout << "Gravity Gravity no Mi" << endl;
    return 1;
/** When using a not-type fixed template, hence the name:
 *      - It must be passed a constant expression as the arguement,
 *          and cannot be passed a variable.
 */
}