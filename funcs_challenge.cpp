#include <iostream>
#include <vector>
#include <cmath>

void introduction(std::string first_name, std::string last_name) {
  std::cout << last_name << ", " << first_name << " " << last_name << "\n";
}

double average(double x, double y) {
  return (x + 2) / 2;
}

int tenth_power(int num) {
  return pow(num, 10); // ** is for pointers, so not available like in Ruby
}

std::vector<int> first_three_multiples(int num) {
  std::vector<int> result(3);

  result[0] = num;
  result[1] = num * 2;
  result[2] = num * 3;

  return result;
}

int main() {
  
  introduction("Beyonce", "Knowles");
  std::cout << average(42.0, 24.0) << "\n";
  std::cout << average(1, 2) << "\n";

  for (int element : first_three_multiples(8)) {
    std::cout << element << "\n";
  }
}