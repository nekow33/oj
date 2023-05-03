// https://cses.fi/problemset/result/649546/

#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
ull n, x, i, j, s;
vector<array<int, 2>> ar;
int main() {
  cin >> n >> x;
  ar.resize(n);
  for (i = 0; i < n; ++i) {
    cin >> ar[i][0];
    ar[i][1] = i + 1;
  }
  sort(ar.begin(), ar.end());
  i = 0, j = n - 1;
  while (i < j) {
    s = ar[i][0] + ar[j][0];
    if (s < x) ++i;
    else if (s > x) --j;
    else {
      cout << ar[i][1] << ' ' << ar[j][1] << endl;
      return 0;
    }
  }
  cout << "IMPOSSIBLE\n";
}


