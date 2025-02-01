#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void odd(int x);
void even(int x);

int main() {
    // cout << "The mera mera no mi, devil fruit." << endl;
    int i;
    do {
        cout << "Please, enter number (0 to exit): ";
        cin >> i;
        odd(i);
    } while( i != 0);
    return 1;
}

void odd(int x) {
    if(x % 2 != 0)
        cout << "It is odd." << endl;
    else even(x);
}
void even(int x) {
    if (x % 2 == 0) 
        cout << "It is even." << endl;
    else odd(x);
}