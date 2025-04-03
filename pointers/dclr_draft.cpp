#include <iostream>

int main() {
        std::cout << "=========\n=========";
        int firstvalue = 7, secondvalue = 23;
        int * p1, * p2;
        
        p1 = &firstvalue; // p1 = address of firstvalue
        p2 = &secondvalue; //p2 = address of secondvalue
        *p1 = 7;
        *p2 = *p1;
        std::cout << "Firstvalue is: " << firstvalue << std::endl;
        std::cout << "p1: " << p1 << std::endl;
        *++p1;
        p2 = p1;
        std::cout << p2 << std::endl;
        std::cout << "============" << std::endl;
        return 0;
}
