#include <iostream>
#include <string>
using namespace std;

/**Comparasion Operators
 * + Printing examples of comparasion operators
 */
int main() {
    int a = 2;
    int b = 3;
    int c = 6;
    int y, z = 0;
    bool value; // If boolean value is true 1 and false 0.
    value = (a == 5); 
    cout << "(a == 5) " << value << endl;
    y = a * b;
    z = c;
    value = (a*b >= c); 
    cout << value << ":\t1(a * b >= c): " << y << " == " << z << endl; 
    y = b + 4;
    z = a * c;
    value = (b + 4 > a * c );
    cout << value << ":\t(b + 4 > a * c ) " << y << " == " << z << endl;
    value = ((b = 2) == a);
    cout << value << ":\t((b = 2) == a)" << endl;
    
    cout << "\nLogical Operators:" << endl;
    value = !(5 == 5);
    cout << value << ":\t!(5 == 5)" << endl;
    value = !(6 <= 4);
    cout << value <<":\t!(6 <= 4)" << endl;
    value = !true;
    cout << value << ":\t!true" << endl;
    value = !false;
    cout << value << "\t!false;" << endl;

    return 0;
}
