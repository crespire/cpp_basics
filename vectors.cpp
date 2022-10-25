#include <iostream>
#include <vector>

int main() {
  std::vector<std::string> burgers;

  burgers.push_back("plain");
  burgers.push_back("with cheese");
  burgers.push_back("no ketchup");

  for (std::string elem : burgers) {
    std::cout << " " << elem;
  }
  std::cout << '\n';
}

/*
  Capacity: number of elements allocated in memory
  Size: current number of elements in vector

  vector<int> Array; - empty vector
  Array.reserve(5); - Reserves memory. but size is zero.
  Array.push_back(value); - No reallocation required, size is now 1.
*/