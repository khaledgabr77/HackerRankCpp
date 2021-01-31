#include <algorithm>
#include <cstdio>

#include <iostream>
#include <vector>

int main() {
  int s;
  std::cout << "enter size";
  std::cin >> s;

  std::vector<int> v(s);
  for (int i = 0; i < s; i++) {
    std::cin >> v[i];
  }

  std::sort(v.begin(), v.end());
  std::cout << "Sorting: ";
  for (auto x : v) {
    std::cout << x << " ";
  }
  return 0;
}