#include <iostream>
#include <string> 
#include <sstream>
using namespace std;

int main() {
    string str {"SPECIAL"};
    for (char c: str) {
        // cout << "[ " << c << " ]" << endl;
        cout << "[ " << c << " ]";
    }
    cout << endl;

}