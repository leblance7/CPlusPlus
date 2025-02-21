/** MultiDimensionalArray.cpp * Define heigth: 3 * Define width: 5 */
#include <iostream>
/** Creating constraints in which the two dimensional array will point to their vaules, 
*   not a variable in of itself. */
#define HEIGHT 3
#define WIDTH 5

/** Global Variables across the scope of the file */
int timmy [HEIGHT][WIDTH];
int n, m, l = 0;

int main () {
std::cout << "Crawlout to the Fallout baby!" << std::endl;
/** Nested for loop containing the index dimensions of the 2d array */
for(n = 0; n < HEIGHT; ++n)
  for(m = 0; m < WIDTH; ++m) 
      {
//      std::cout << "l: " << l << "\t";
/** Populating the values of the doubly linked array. */ 
      timmy[n][m] = (n + 1)*(m + 1);
      std::cout << "timmy[n] " << n << " , [m] " << m << "-> " << timmy[n][m] << " ";
            
      ++l;
      if ( l % 5 == 0 ) {
        std::cout << l / 5 << std::endl; 
          }/** Exiting the for loop and back into the main method */
      }  
     
return 0;
}
