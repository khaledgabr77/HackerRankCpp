#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int size;
  std::cout << "Enter the Size: " << std::endl;
  std::cin >> size;
  std::vector<int> my_vec(size);
  for (int i = 0; i < size; i++) {
    std::cin >> my_vec[i];
  }
  for (auto x : my_vec) {
    std::cout << x << std::endl;
  }
  my_vec.erase(my_vec.begin() + 1, my_vec.begin() + 3);
  std::cout << my_vec.size() << std::endl;
  for (int i = 0; i < my_vec.size(); i++) {
    std::cout << "After:\n" << my_vec[i] << " ";
  }

  return 0;
}