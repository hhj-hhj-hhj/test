#include "add.hpp"
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int result = add(3, -4);
  vector<int> numbers = {1, 2, 3, 4, 5};
  std::cout << "result: " << result << endl;
  return 0;
}