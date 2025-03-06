#include <iostream> 
#include <array>

int main() {
  /*Container Library array*/
  std::array<int, 3> my_ary = {9, 19, 29};

  /* Printing of the array before the array is incremented
    - For loops without brackets are based on indentation.
  */
  for (int elem: my_ary) 
    std::cout << "elem: " << elem << std::endl;
  std::cout << "Printing of array before the array is incremented" << std::endl;
  for( int i = 0; i <= my_ary.size(); ++i) {
    ++my_ary[i];
  }
  /*Enchanched for loops
   - Must be done in the main method or will cause pointer error. */
  for (int elem: my_ary) 
    std::cout << "elem: " << elem << std::endl;
  // prt_ary(my_ary);
  
  std::cout << "Pikachu, you're supposed to go in the\
 pokeball." << std::endl;
  return 0;
}

// void prt_ary (int array[]) {
//   //for (int elem: array) 
//     for (int elem: array) 
//       std::cout << "elem: " << elem << std::endl; 
//   }

