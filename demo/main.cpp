//Copyright by MaryMorgan

#include "Check.h"
#include "Time.h"

int main() {
  std::vector <int64_t> sizes;

  long i=1;
  while (i > 0 and i != 0){
    std::cout << "Укажите размер буфера: ";
    std::cin >> i;
    if(i>0 and i != 0)
      sizes.push_back(i);
  }
  Time inv1(_forward, sizes);
  inv1.print(std::cout);

  Time inv2(_reverse, sizes);
  inv2.print(std::cout);

  Time inv3(_random, sizes);
  inv3.print(std::cout);
}