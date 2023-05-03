// https://cses.fi/problemset/task/1068

#include <iostream>
using namespace std;

long long n;
int main() {
  cin >> n;
  while (n > 1) {
    printf("%lld ", n);
    if (n & 1) n = n * 3 + 1;
    else n >>= 1;
  }
  printf("1\n");
  return 0;
}


