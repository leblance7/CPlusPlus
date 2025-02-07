#include <iostream>
#include <string>
#include <sstream>
using namespace std;

/** ========= Defining the Template class ======= */
template <class T, class U>

/** Creating template method that accepts multiple datatypes */
bool are_equal(T a, U b) {
    return (a == b);
}

int main() {
/** First var for the multiclass template */

    cout << "Enter the first letter or word you would lik/"
 " to compare" << endl;
    string c;
    cin >> c;

/** Second var for the multiclass template */
    cout << "Enter the second letter or word you like/"
" to compare" << endl;
    string d;
    cin >> d;

/** Calling the are_equal template method */
    if (are_equal(c, d))
        cout << "The two variables are equal." << endl;
    else 
        cout << "The two string are not equal" << endl;
    
/** Calling the sum template method */
    return 1;
}