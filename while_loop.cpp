#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int n = 10;
    while ( n > 0 ) {
        cout << n << ", ";
        --n;
    }

    cout << "liftoff!\n"; 
}