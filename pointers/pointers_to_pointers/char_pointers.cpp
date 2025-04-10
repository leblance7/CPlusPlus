#include <iostream>



int main() {       

        char a = 'z';
        char * b = &a;
        char ** c = &b;

        std::cout << "a: " << a << "\nb: " << b << ""\
"\nc: "<< c << std::endl;
        std::cout << "Nen - type: Specialist" << std::endl;
        return 0;
}
