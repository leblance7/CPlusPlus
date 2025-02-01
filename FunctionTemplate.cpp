#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// sum method returning the float numerical type.
float sum (float num1, float num2) {
    float sum = num1 + num2;
    return sum;
}

// sum method using the returning the double numerical type.
double sum (double num1, double num2) {
    double sum = num1 + num2;
    return sum;
} 

int main () {

    float fumber1 = 12.56, fumber2 = 13.75;
    double dumber1 = 17.00, dumber2 = 19;
    cout << sum(fumber1, fumber2) << endl;
    cout << sum(dumber1, dumber2) << endl;
    cout << "Hit me baby, one more time!" << endl;

}