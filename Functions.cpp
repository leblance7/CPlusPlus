#include <iostream>
#include <iostream>
#include <iostream>
using namespace std;
/**Functions that return a data type */
string concat (string str1, string str2) {
    string combined;
    combined = str1 + " " + str2;
    return combined;
}

/**Functions that don't return a data type. */

void printmessage() {
    cout << "That what it do Yugz." << endl;
}

int main() {
 
    string test, str1, str2;
    cout << "Enter in a string for the first varible." << endl;
    cin >> str1;
    cout << "Enter a string for the second variable." << endl;
    cin >> str2;
    test = concat(str1, str2);
    cout << "The test example is: " << test << endl;
    printmessage();
    return 1;
}