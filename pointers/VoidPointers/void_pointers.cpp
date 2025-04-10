/** void_pointers.cpp generic method
* 1) Create a increment method that contains an 
*       if and else if statement.
* 2) Initialized the variables and call increment in the main method.
*/
#include <iostream>

void increment(void * data, int psize) {
       if(psize == sizeof(char)) {
        char* pchar = (char*)data;
        ++(*pchar);
       }
       else if (psize == sizeof(int)) {
        int* pint = (int*)data;
        ++(*pint);
       }
}

int main() {
//        char[3] = {'h', 'e', 'l'};
//        std::string letter = "ZZZZ";
//        int size = sizeof(letter);
//        std::cout << "size: " << size << std::endl;
        char a = 'Z';
        int b = 1820;
        increment(&a, sizeof(a));
        increment(&b, sizeof(b));  
        std::cout << "a: " << a << std::endl;
        std::cout << "b: " << b << std::endl;
        std::cout << "Nen - type: transmuter" << std::endl;

        return 0;
}
