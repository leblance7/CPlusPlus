/**Using.cpp
 * 2/6/25
 * + Examples of the keyword: using.
 */
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

namespace first {
    int x = 5;
    int y = 10;
}

namespace second {
    double x = 3.1416;
    double y = 2.7183;
}

int main() {
    using first::x;
    using second::y;
    cout << x << "\n";
    cout << y << "\n";
    cout << first::y << "\n";
    cout << second::x << "\n";
    return 1;
}