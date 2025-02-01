// ** Ways to initialize variables and their functions.
#include <iostream>

int main() {
    /** c-like initialization
     *  type idenifier = intial_value;  
    */    
    int x = 0;

    /**constructor initialization ()
     * - Encloses initial value between parentheses.
     * type identifier (initial_value);
    */
    int y (1);

   /** uniform intialization
    * similar to type above but uses curly braces instead {}
    * 
    */
    int z {2};
    return 0;
}