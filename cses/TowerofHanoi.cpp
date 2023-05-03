// https://cses.fi/problemset/task/2165
#include <iostream>
using namespace std;

int n;

void hanoi(int n, int from, int to, int via) {
  if (n == 1) printf("%d %d\n", from, to);
  else {
    hanoi(n - 1, from, via, to);
    hanoi(1, from, to, via);
    hanoi(n - 1, via, to, from);
  };
}

int main() {
  cin >> n;
  printf("%d\n", (1 << n) - 1);
  hanoi(n, 1, 3, 2);
}
