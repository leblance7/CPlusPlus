#include <iostream>
#include <string>
#include <sstream>
using namespace std;

/**Goto loop example */
int main() {
    int n = 10;
mylabel: 
    cout << n << ", ";
    n--;
    if (n > 0) goto mylabel;
    cout << "liftoff!\n";
    // cout << "BoomBoomClat" << endl;
    return 1;
}