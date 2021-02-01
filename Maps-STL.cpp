#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main() {

  int n, type, y;
  cin >> n;

  string x;
  map<string, int> m;

  for (int i = 0; i < n; i++) {
    cin >> type;
    if (type == 1) {
      cin >> x >> y;
      m[x] += y;
    }

    if (type == 2) {
      cin >> x;
      m.erase(x);
    }
    if (type == 3) {
      cin >> x;
      map<string, int>::iterator itr = m.find(x);
      if (itr == m.end()) {
        cout << "0" << endl;
      } else
        cout << m[x] << endl;
    }
  }

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  return 0;
}