#include <iostream>
#include <string>
#include <sstream>
using namespace std;

/**do statement{} while (condition) */

int main () {
    string str;
    do {
        cout <<  "Enter text: ";
        getline (cin, str);
        cout << "You entered: " << str << "\n";
    }
    while (str != "goodbye"); 
    return 0;
}