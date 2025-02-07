/**
 *  + Scope of namespaces within variables
 *  + Namespace Aliasing: Namespaces can be given new names using
 *      the syntax below.
 */
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

namespace first {
    int x = 5;
}

namespace second {
    double x = 3.1416;
}

int main() {
   {
    using namespace first;
    cout << x << "\n";
   }
   {
    using namespace second;
    cout << x << "\n";
    namespace first = second;
    using namespace first;
    cout << x << "\n";
   }
   return 1;
}