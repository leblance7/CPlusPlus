#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int multiple (int a, int b = 2) {
    int r;
    r = a * b;
    return (r);
}

int main() {
    cout << "mulitple: " << multiple(13) << endl;
    cout << "multiple: " << multiple(13, 13) << endl;
    return 1;
}