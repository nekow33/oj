// https://cses.fi/problemset/task/1071

#include <iostream>
using namespace std;

using ull = unsigned long long int;

int main() {
  ull n, x, y, t, a, b, d;
  cin >> n;
  while (n--) {
    cin >> x >> y;
    if (y > x) a = y, b = x, d = -1;
    else a = x, b = y, d = 1;
    t = 1 + (a - 1) * a;
    if (a & 1) d *= -1;
    t += (a - b) * d;
    cout << t << '\n';
  }
}
