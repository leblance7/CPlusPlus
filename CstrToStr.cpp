#include <iostream>
#include <string>

int main() {
        char myntcs[] = "Some text";
        std::string mystring = myntcs; // Converts c - string to string
//        std:: cout << mystring;
        std::cout << "Converting c - sting, to string" << std::endl;
        std::cout << mystring << std::endl;
        std::cout << mystring.c_str() << std::endl;
        return 0;
}
