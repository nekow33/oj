// https://cses.fi/problemset/task/2431
#include <iostream>
using namespace std;
using ull = unsigned long long;
ull n, q;

ull query(ull q) {
  ull base = 1;
  ull s = 1;
  while (q > base * 9 * s) {
    q -= base * 9 * s;
    base *= 10;
    s++;
  }
  ull x = q / s;
  ull y = x + base;
  ull t = q % s;
  if (t == 0) return (y - 1) % 10;
  while (s - t++) y /= 10;
  return y % 10;
}
  
    

int main() {
  cin >> n;
  for (ull i = 0; i < n; ++i) {
    cin >> q;
    cout << query(q) << endl;
  }
}
