#include <iostream>

int main() {
        int firstvalue, secondvalue;
        int * mypointer;
        
//Both are the same, or clos e by one decimal..
        std::cout << "\nmypointer address: " << &mypointer << std::endl;
        std::cout << "mypointer value: " << mypointer << std::endl;
        mypointer = &firstvalue;
        *mypointer = 10;
        
//Literal value of variable
        std::cout << "firstvalue is " << firstvalue << std::endl;
//Memory address of variable       
        std::cout << "firstvalue memeory address is: " << firstvalue << std::endl;

//secondvalue
        mypointer = &secondvalue;
        *mypointer = 20;

        std::cout << "second value is: " << secondvalue << std::endl;

        std::cout << "\n\nEsther 4:14\n 'If you remain silent at this time, relief and deliverance for the Jews will arise from another place, but you and your father's family will perish. And who knows but that you have come into your royal position for sucha time as this?'" << std::endl;
        std::cout << "pointer.cpp\n" << std::endl;
        return 0;
}
