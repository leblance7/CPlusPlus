#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int x;
    string mystr;
    cout << "Enter a number: " << endl;
    getline(cin, mystr);
    stringstream(mystr) >> x;
    if ( x > 0) 
        cout << "The number is positive" << endl;
    else if( x < 0) 
        cout << "The number is negative" << endl;
    else 
        cout << "x is 0" << endl;
    // cout << "DADADAN!" << endl;
    return 1;
}
