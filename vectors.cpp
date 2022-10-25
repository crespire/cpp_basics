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