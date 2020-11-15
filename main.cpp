#include <iostream>
#include "RemoveSmiles.hpp"
#include "AutoTest.hpp"


int main() {
  try {
    if (!AutoTest(true)) {
      std::cout << "Some tests not passed!\n";
      return 0;
    }
    std::string old_str, new_str;

    std::cout << "Input string:\n";
    std::getline(std::cin, old_str);
    new_str = RemoveSmiles(old_str);
    std::cout << "New string:\n" << new_str << '\n';

    return 0;
  }
  catch (const std::exception& e) {
    std::cerr << e.what();
    return 1;
  }
}
