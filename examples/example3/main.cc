#include <iostream>
#include <string>

#include "lib1/lib1.h"
#include "lib2/lib2.h"

int main() {
  CLib1::PrintHello();
  CLib2::PrintWorld();
  // std::cout << "Hello World!" << std::endl;
  return 0;
}