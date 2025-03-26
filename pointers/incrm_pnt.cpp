/**
* I think the pointers are intialized correctly but the examples 
*       given below in lines 14 - 21 require prerequirisuite lines of code.
* */

/**
* Syntax example of pointers and how to increment them. */        
#include <iostream>

int main(){
        int var = 7; // Initilalizing varaible
        int * p; // Initalizing pointer
        p = &var; // Final step of initializing pointer
        
        &p++; // same as *(p++): increment pointer, and dereference unincremented address.
        std::cout << "p: " << var << std::endl;       

  //      *++p; // same as *(p++): increment pointer, and dereference incremented address
        
 //       ++*p; // dereference pointer, and inrement the value it points to

 //       (*p)++; // dereference pointer, and post - increment the value it points to. 
        
        std::cout << "\nAll of the days of my life i will praise the Lord.\n" << std::endl;
        return 0;
}



