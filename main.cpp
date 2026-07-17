#include "add.hpp"
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int result = add(35, 45);
  vector<int> numbers = {1, 2, 3, 4, 5};
  std::cout << "result: " << result << endl;
  for (const auto &num : numbers) {
    std::cout << num << " ";
  }
  return 0;
}