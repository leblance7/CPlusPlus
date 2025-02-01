#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string mystr;
    float price = 0;
    int quantity = 0;

    cout << "Enter da price: ";
    getline (cin, mystr);
    stringstream(mystr) >> price; // price is an interger float datatype
    cout << "price: " <<  price << endl;
    cout << "Enter quantity: ";
    string newStr;
    getline(cin, newStr);
    cout << "Quanity : " << newStr << endl;
   // getline(cin, mystr) >> quantity;
    
    
    return 0;
}