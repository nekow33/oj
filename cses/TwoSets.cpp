// https://cses.fi/problemset/task/1092

#include <iostream>
#include <vector>
using namespace std;

int n, i, j;
vector<int> a1, a2;
int main() {
  cin >> n;
  if (n % 4 == 0 || n % 4 == 3) {
    cout << "YES\n";
    if (n & 1) {
      a1 = vector<int>{1, 2};
      a2 = vector<int>{3};
      i = 4, j = n;
    }
    else {
      i = 1, j = n;
    }
    while (i < j) {
      if (i & 1) {
        a2.emplace_back(i++);
        a2.emplace_back(j--);
      } else {
        a1.emplace_back(i++);
        a1.emplace_back(j--);
      }
    }
    cout << a1.size() << '\n';
    for (int x: a1) cout << x << ' ';
    cout << '\n' << a2.size() << '\n';
    for (int x: a2) cout << x << ' ';
  } else cout << "NO\n";
  return 0;
}
