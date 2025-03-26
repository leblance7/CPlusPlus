#include <iostream>

int main() {
// Declaring first and second values.
        int firstvalue = 17, secondvalue = 23; 
        int * p1, * p2;

// Setting pointers to their defined variables.
        p1 = &firstvalue;
        p2 = &secondvalue;
        std::cout << "p1: " << p1 << std::endl;

        int var = &p1;
        std::cout << "var: " << var << std::endl;
        std::cout << "Be kind to your mind" << std::endl; 

        return 0;
}
