// https://cses.fi/problemset/task/1072
#include <iostream>
using namespace std;

using ull = unsigned long long int;

ull n, a, b;
int main() {
  cin >> n;
  for (int i = 1; i <= n; ++i) {
    a = i * i, b = a * (a - 1) / 2;
    if (i > 2)
      b = b - 4 * (i - 1) * (i - 2);
    cout << b << '\n';
  }
}

