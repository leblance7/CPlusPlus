#include <iostream>

int main() {
  /* Creation of an int Array */
  int my_ary[3] = {10, 20, 30}; 
  int ary_lgth = std::size(my_ary);
  
  for ( int n = 0; n < ary_lgth; ++n) 
    ++my_ary[n];     
  for (int elem:  my_ary) 
    std::cout << "elem: " << elem << std::endl;

  /* For loops can operate correctly without curly braces..
      However, nested For Loops require curly braces. */

  /*for ( int n = 0; n < ary_lgth; ++n) {
  *  ++my_ary[n];     
  *for (int elem:  my_ary) 
  *  std::cout << "elem: " << elem << std::endl;
  *}
  */
  std::cout << "Yikes" << std::endl;
  return 0;

}
