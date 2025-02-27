#include <iostream>
#include <array>

 void prnt_ary (int args[], int length) {
   /* Calling the returning the varibles in an array. */ 
    for(int x = 0; x < length; ++x) {
      std::cout << "args[x]: " << args[x] << std::endl;
    }
    std::cout << "\n";
  } 

int main() {
// int frst_lgth, scnd_lgth;

  int frst_lgth;
  int scnd_lgth;
  
/* <====  sizeof() method ===== > */   
  int frst_ary[] = {5, 10, 15};
  frst_lgth = std::size(frst_ary);
  int scnd_ary[] = {2, 4, 6, 8, 10};
  scnd_lgth = std::size(scnd_ary);

/* <====  Calling prnt_arry method ====> */
  prnt_ary(frst_ary, frst_lgth);
  prnt_ary(scnd_ary, scnd_lgth);

  std::cout << "1st length : " << frst_lgth << ",\
  2nd length: " << scnd_lgth << std::endl;

  std::cout << "The Commonwealth needs you General." << std::endl;
  return 0;
}
