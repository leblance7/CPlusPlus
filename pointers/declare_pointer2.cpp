#include <iostream>

int main() {
// Creating an array for number with five items.
        int numbers[5];
        int  * p;

//Assignment of first value in array
//        std::cout << "&numbers: " << p << std::endl;
        p = numbers; *p = 10; // 1st index value
//       std::cout << numbers[0] << std::endl;
//       std::cout << "*p: " << *p << std::endl;

//Assignment of second value in array
        p++; *p = 20; // 2nd index value
//        std::cout << numbers[1] << std::endl;
//        std::cout << "*p: " << *p << std::endl;

        p = &numbers[2];        *p = 30; // 3rd index value
//        std::cout << "&numbers[2]: " << &numbers[2] << " numbers[2]: "\
//<< numbers[2] << std::endl;
//        std::cout << "*p: " << *p << std::endl;
        
        p = numbers + 3;        *p = 40; // 4th index value
//        std::cout << "numbers: " << numbers << std::endl;
//        std::cout << "*p: " << *p << std::endl;
        
        p = numbers;    *(p + 4) = 50; /** 5th index value and changes derefensor location to last
                last value in array. */
//        std::cout << "numbers: " << numbers << std::endl;
//        std::cout << "*p: " << *(p + 4) << std::endl;

        for (int n = 0; n < 5; ++n) {
               std::cout << "numbers[" << n << "]: "\
"" << numbers[n] << std::endl;
        }

        std::cout << "==== He leads me beside calm waters"\
"and gentle pastures. ====" << std::endl;
        return 0;
}
