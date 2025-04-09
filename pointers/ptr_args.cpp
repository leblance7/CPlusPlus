/** Pointers as arguments:
* 1) Creates the method increment_all(int* start, int* stop){}
*       - Creates a value refering to memory address for the start and stop point. 
* Creates a while loop to iterate through array, ending at the 
*       stop point.
* 2) Creates a print_all (const int* start, const int* stop){}
* - Taking constant non - mutatable pointers as parameters.
* - Start is the iterator while int const ptr(stop) is the 
*       end value.
* 3) Find a way to make the program userinput sensitive.
* 4) Call the increment_all() print_all() methods in the main() 
*       method.
*/
#include <iostream>
#include <string> 
#include <sstream>

void increment_all (int* start, int* stop) {
        int * current = start;
        while(current != stop) {
//                start += 7;
                ++(*current); // Increment the value pointed.
                ++current; // Increment pointer.
        }        
}

void print_all(const int* start, const int* stop) {
        const int * current = start;
        while (current != stop) {
                std::cout << "number: " << start << "  :"\
<< *current << std::endl;
                ++current;
        }
}

/**Main method
* - Defines and contains values for increment_all method to
*       be called. */

int main() {

        int numbers[3] = {};
        int *p = numbers;
/** Taking input for the array */
        for(int number: numbers) {
                std::cout << "Enter a number: " << std::endl;
                std::cin >> *p;
                ++p;
        } 

/** ===== Calling the methods ====== << */
        increment_all(numbers, numbers + 3);          

/** Printing the results from the vanilla array */
        print_all(numbers, numbers + 3);
//        for(int number: numbers) {
//                std::cout << "number[]: " << number << std::endl;
//        }

        std::cout << "1 Corinthians 10:31 \nSo whether you eat or drink or whatever you do, do it all for the glory of God." << std::endl;
        return 0;
}

//               (*p)++; // 1) dereferences, then increments memeory value
/** *p++ // #1 increments, and the  #2 derefences */
//Also, adds to the value.

// >>===========================> . . .
//int numbers[3] = {25, 50, 75};
//        int ary_length;
//        std::cout << "Enter the amount of elements you would like to"\
//" have in array." << std::endl;
//        std::cin >> ary_length;
/** As what I know now arrays must be hard coded when initalizing.
        */
// . . . <========================<<
