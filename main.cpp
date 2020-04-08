#include <iostream>
#include "RemoveSmiles.hpp"


int main() {
  try {
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
