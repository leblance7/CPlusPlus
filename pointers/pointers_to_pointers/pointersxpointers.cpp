#include <iostream>

int main() {
        int a;
        int * b;
        int ** c;
        a = 9;
        b = &a;
        c = &b;
        std::cout << "  a: " << a << std::endl;
        std::cout << " &a: " << &a << std::endl;
        std::cout << std::endl;
        std::cout << "  b: " << b << std::endl;
        std::cout << " &b: " << &b << std::endl;
        std::cout << " *b: " << *b << std::endl;
        std::cout << std::endl;
        std::cout << "  c: " << c << std::endl;
        std::cout << " &c: " << &c << std::endl;
        std::cout << " *c: " << *c << std::endl;
        std::cout << "**c: " << **c << std::endl;
        std::cout << "Nen-type: Specialist" << std::endl;
        return 0;
}
