#include <iostream>
#include <string>

int main() {
   
  char q1[] = "What is ur name son? ";
  std::string q2 = "where do you live? ";
  char answer1 [80];
  
  std::string answer2;
  std::cout << q1;
  std::cin >> answer1; //Does not require the std::endl to print
  std::cout << q2;
  std::cin >> answer2;

  std::cout << "Hello, " << answer1;
  std::cout << " from " << answer2 << "!\n";
  // std::cout << "Pay the one?" << std::endl;
  return 0;
  }
