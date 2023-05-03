// https://cses.fi/problemset/task/1090
#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
ull i, j, n, x, ans;
vector<ull> ar;

int main() {
  cin >> n >> x;
  ar.resize(n);
  for (i = 0; i < n; ++i) cin >> ar[i];
  sort(ar.begin(), ar.end());
  i = 0, j = n - 1;
  while (i < j) {
    if (ar[i] + ar[j] > x) --j, ++ans;
    else ++i, --j, ++ans;
  }
  if (i == j) ++ans;
  cout << ans;
  return 0;
}
