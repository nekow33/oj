// https://cses.fi/problemset/task/1629
#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
ull n, i, t, ans;
vector<array<ull, 2>> ar;

int main() {
  cin >> n;
  ar.resize(n);
  for (i = 0; i < n; ++i) 
    cin >> ar[i][1] >> ar[i][0];
  sort(ar.begin(), ar.end());
  for (i = 0; i < n; ++i) 
    if (ar[i][1] >= t)
      ++ans, t = ar[i][0];
  cout << ans;
}
