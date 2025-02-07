#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int x = 10; //Global
    int y = 20; //Global
    {
        int x; // Inner scope
        x = 50; // Sets value to inner x
        y = 50; // Sets value to (outer) y
        cout << "Inner Blocks:\n";
        cout << "x: " << x << "\n";
        cout << "y: " << y << "\n";
    }
    cout << "Outer block:\n";
    cout << "x: " << x << "\n"; 
    cout << "y: " << y << "\n";
    return 0;
    cout << "Your on some mighty thin ice Ellie." << endl;
    return 1;
}