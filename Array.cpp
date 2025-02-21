#include <iostream>
/** Adding the commenting lines for documentation in cpp code
*    using vim. */

int foo [] = {16, 2, 17, 77, 40 ,12071};
int n, result = 0;

int main() {
    std::cout << "The Legend of Zelda" << std::endl;
/**sdfasdf */
    for ( n = 0; n < 5; ++n) {
      result += foo[n];
    std::cout << foo[n] << std::endl;
    }
    
    std::cout << result << std::endl;
    return 1; 
}

