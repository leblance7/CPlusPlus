#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int x;  /**Static variables not explicilally initialized are set
    set to zeros. */

int main () {
    int y;  /** Local variables are not explically set
    and have an undetermined value. */
    cout  << x << '\n';
    cout << y << '\n'; 
    return 1;
}