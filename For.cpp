#include <iostream>
#include <string>
#include <sstream>
using namespace std;
/* for (initialization; condition; incremetor/decrementor) statement{}*/
int main() {
    /** use comma for seperators in the same statement section */
    for( int n = 18;  n > 0; n -= 3, n += 2) {
        cout << n << ", ";
    }
    cout << "liftoff!" << endl;
    for(int m = 0, i = 100; m != i; ++m, --i) {
        cout << "m: " << m << " i: " << i << "\n";
    }
    return 1;
}
