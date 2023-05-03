// https://cses.fi/problemset/task/1094

#include <iostream>
using namespace std;
using ull = unsigned long long;

int n;
ull x, t, p;

int main() {
  cin >> n >> p;
  for (int i = 1; i < n; ++i) {
    cin >> t;
    if (t < p) x += p - t;
    else p = t;
  }
  cout << x << endl;
}




