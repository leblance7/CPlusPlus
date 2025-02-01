#include <iostream>
using namespace std;

/**endl prints the line while flushing the stream. */
int main() {
    int a = 5;      // c - like initializtion
    int b(3);       // constructor initialization
    int c{2};       // uniform initialization
    int result;  
    /**Print statements */
    cout << "a: " << a << endl;
    cout << "b(3): " << b << endl;
    cout << "c{2}: " << c << endl;
    
    a = a + b;
    cout << "a + b: " << a << endl;
    result = a - c;
    cout << "result: a - c: " << result << endl;    
    return 0;
}