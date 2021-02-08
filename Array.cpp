#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int size;
  std::cin >> size;
  std::vector<int> v(size);
  for (int count = 0; count < size; count++) {
    std::cin >> v[count];
  }
  std::reverse(v.begin(), v.end());
  for (const auto &x : v) {
    std::cout << x << "\n";
  }
}
