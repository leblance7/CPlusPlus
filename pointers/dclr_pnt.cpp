#include <iostream>

int main() {
        std::cout << "================\n";
// Declaring first and second values.
        int firstvalue = 17, secondvalue = 23; 
        int * p1, * p2;

// Setting pointers to their defined variables.
        p1 = &firstvalue;
        p2 = &secondvalue;
        std::cout << "p1: " << p1 << " pointer variable" << std::endl;

// Declaring the new variable to the value or memeory address. 
        int pointer1 = *p1; //Created new variable dereferencing the pointer
// * Which the pointer was assigned to memory address. 
        std::cout << "value pointer1: " << pointer1 << std::endl;
        
// Creating variable to represent actual second value.
        std::cout << "p2: " << p2 << "pointer variable." << std::endl;
        int pointer2 = *p2; 
        std::cout << "value pointer2: " << pointer2 << std::endl;

        std::cout << " =============== \ndclr_pnt.cpp\n" << std::endl; 

        return 0;
}
