#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int m, num;
  std::cin >> m;
  std::vector<int> v;
  for (int i = 0; i < m; i++) {
    std::cin >> num;
    v.push_back(num);
  }
  int n, val;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::cin >> val;
    std::vector<int>::iterator low = lower_bound(v.begin(), v.end(), val);
    if (v[low - v.begin()] == val)
      std::cout << "Yes " << (low - v.begin() + 1) << std::endl;
    else
      std::cout << "No " << (low - v.begin() + 1) << std::endl;
  }
  return 0;
}