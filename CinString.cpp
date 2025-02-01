#include <iostream>
#include <string>
using namespace std;

int main() {
    string mystr;
    cout << "What class would you like to pick?\n";
    getline(cin, mystr);
    cout << "Great choice " << mystr << ".\n";
    cout << "What would you like to specialize in? ";
    getline(cin, mystr); 
    cout << mystr << " . . . Tis a long road ahead of you." << endl;
    return 0;
}