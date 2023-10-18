#include <iostream>
#include "findCountMinimalMembers.hpp"

int main()
{
  long long answer = 0;
  try {
    findCountMinimalMembers(answer);
  } catch (std::logic_error const &error) {
    std::cout << error.what() << "\n";
    return 2;
  }
  std::cout << answer << "\n";
}
