#include <iostream>
#include <string>
using namespace std;

int main() {
    char32_t lette = 'test';
    int x = sizeof(lette);
    cout << "sizeof: " << x << endl;
    return 0;
}