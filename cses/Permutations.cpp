// https://cses.fi/problemset/task/1070

#include <iostream>
using namespace std;
int n;
int main() {
  cin >> n;
  if (n == 1) cout << 1;
  else if (n <= 3) cout << "NO SOLUTION\n";
  else if (n == 4) cout << "3 1 4 2\n";
  else {
    for (int i = n; i > 0; i -= 2) printf("%d ", i);
    for (int i = n -1; i > 0; i -= 2) printf("%d ", i);
  }
  return 0;
}


