#include <iostream>
#include <string>
#include <sstream>
using namespace std;
/**Wait to use endl on cout output methods, as it will flush
 *      the temporary varible being used.
 */
int main() {
    string mystr;
    float price = 0;
    int quantity = 0;

    cout << "Enter price: ";
    getline(cin, mystr);
    stringstream(mystr) >> price;
    cout << "Enter quanity: ";
    getline(cin, mystr);
    stringstream(mystr) >> quantity;
    cout << "Total price: " << price * quantity << endl;
    
    // cout << "This is the tale of Jirayah the Gallant." << endl;
    return 0;
}