#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    for ( int n = 10; n > 0; n--) {
        cout << n << ", ";
        if (n == 3) {
            cout << "!!    . . . Nuclear launch aborted.";
            break;
        }
    }
    return 1;
}