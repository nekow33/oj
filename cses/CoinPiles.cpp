// https://cses.fi/problemset/task/1754

#include <iostream>
using namespace std;

int main() {
  int n, a, b, x, y;
  cin >> n;
  while (n--) {
    cin >> a >> b;
    x = 2 * a - b, y = 2 * b - a;
    if (x >= 0 && x % 3 == 0 && y >= 0 && y % 3 == 0) puts("YES\n");
    else puts("NO\n");
  }
}
