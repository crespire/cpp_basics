#include <iostream>
#include <vector>

int main() {
  std::vector<int> numbers = {2, 4, 3, 6, 1, 9};
  double evens = 0;
  double odds = 1;

  for (int elem : numbers) {
    if (elem % 2 == 0) {
      evens += elem;
    } else {
      odds *= elem;
    }
  }

  std::cout << "Sum of even numbers is " << evens << "\n";
  std::cout << "Product of odd numbers is " << odds << "\n";
}

/*
  Expected output:
  Sum of even numbers is 12
  Product of odd numbers is 27
*/