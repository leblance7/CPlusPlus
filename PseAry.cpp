#include <iostream>

//Defining the constants to be used with the pseudo array.
#define WIDTH 5
#define HEIGHT 3

int MinuteMen [HEIGHT * WIDTH]; // Defining globally the pseudo array
int n, m; //Global variables to iterate and populate the array.

int main() {
  std::cout << "General, the Minute Men need your help again." << std::endl;
  for( n = 0; n <= HEIGHT; ++n)
    for(m = 0; m <= WIDTH; ++m) {
      std::cout << "MinuteMen[n * WIDTH + m]: " << n * WIDTH + m << std::endl;
      MinuteMen[n * WIDTH + m] = (n + 1) * (m + 1);
      std::cout <<  "MinuteMen --> " << MinuteMen[n * WIDTH + m]  << std::endl; 
    }
  return 0;
}
