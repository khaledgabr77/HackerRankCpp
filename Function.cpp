#include <algorithm>
#include <iostream>

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int &a, int &b, int &c, int &d) {
  return std::max({a, b, c, d});
}
int main() {
  int a, b, c, d;
  std::cout << "Enter the 4 Value:= " << std::endl;
  std::cin >> a >> b >> c >> d;
  int ans = max_of_four(a, b, c, d);
  std::cout << "Max num is: " << ans << std::endl;
  return 0;
}
