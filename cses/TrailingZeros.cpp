// https://cses.fi/problemset/task/1618
#include <iostream>

using namespace std;

int main() {
  int n, ans; 
  cin >> n;
  while (n) {
    ans += n / 5;
    n /= 5;
  }
  cout << ans;
}
