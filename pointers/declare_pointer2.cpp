#include <iostream>

int main() {
// Creating an array for number with five items.
        int numbers[5];
        int  * p;

//Assignment of first value in array
        std::cout << "&numbers: " << p << std::endl;
        p = numbers; *p = 10;
        std::cout << numbers[0] << std::endl;

//Assignment of second value in array
        p++; *p = 20;
        std::cout << numbers[1] << std::endl;

        p++; *p = 30;
        std::cout << numbers[2] << std::endl;
        std::cout << "==== He leads me beside calm waters"\
"and gentle pastures. ====" << std::endl;
        return 0;
}
