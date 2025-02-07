#include <iostream>
#include <string>
#include <sstream> 
using namespace std;

namespace foo {
    int value() { return 5; }
}

namespace bar {
    const double pi = 3.1416;
    double value() { return 10 * pi; }
}

namespace fooBar {
    string foo1 = "Babies";
    string value() {return "Matter" + foo1; }
}

int main() {
    cout << foo::value() << "\n";
    cout << bar::value() << "\n";
    cout << bar::pi << "\n";
//     cout << "You kids might have heard this words before." << 
// " Plus ultra, BoomBoomClat!" << endl;
/**My personal variation of the namespace entity concatening strings */
    cout << fooBar::value() << endl;
    return 1;
}
