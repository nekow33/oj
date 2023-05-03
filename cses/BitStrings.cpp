// https://cses.fi/problemset/task/1617
#include <iostream>

using namespace std;

using ull = unsigned long long int;

const int N = 1e9+7;

ull power(int x) {
  if (x > 30) return (((1 << 30) % N) * power(x - 30)) % N;
  return (1 << x) % N;
}

int main() {
  int n;
  cin >> n;
  cout << power(n) << endl;
}

