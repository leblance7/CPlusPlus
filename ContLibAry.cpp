#include <iostream>
#include <array>

int main() {
  /*Container Library array*/
  int my_ary 3 > {9, 19, 29};
  std::array<int, 3> my_ary = {9, 19, 29};
  for( int i = 0; i <= my_ary.size(); ++i) {
    ++my_ary[i];
  }
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

