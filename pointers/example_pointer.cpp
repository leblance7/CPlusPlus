#include <iostream>

int main() {
        int myvar, bar;
        int * foo;

        myvar = 25;
        foo = &myvar;
        bar = myvar;

//Printing of variables and memoery addresses.
        std::cout <<"myvar: " << myvar << ", value expression of varible.\nfoo: " << foo << " ,the memoery address of variable." << std::endl;
        std::cout << "bar: " << bar << ", value expression from memory address" << std::endl;

        std::cout << "The renewal of your mind" << std::endl;
        return 0;
}
