#include <iostream>

int main() {
        std::cout << "===================>" << std::endl;
        int x;
        int y = 10;
        const int * p = &y;

        x = *p;
        std::cout << "x: " << x << std::endl;       
        
        *p = x; //error: modifiying p, which is const qualififed.
        //read-only variable is not assignable

        std::cout << "You alone lord make "\
"it right \n<==================" << std::endl;
        return 0;
}

