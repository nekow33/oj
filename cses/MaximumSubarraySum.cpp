// https://cses.fi/problemset/task/1643
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll n, i, x;

int main() {
  cin >> n;
  ll ans = -1e18, mss=-1e18;
  for (i = 0; i < n; ++i) {
    cin >> x;
    mss = max(0ll+x, mss+x);
    ans = max(ans, mss); 
  }
  cout << ans;
}

