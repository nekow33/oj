// https://cses.fi/problemset/task/1621
#include <bits/stdc++.h>
using namespace std;

using ull = unsigned long long;
set<ull> dic;
ull n, x;
int main() {
  ull n;
  cin >> n;
  while (n--) {
    cin >> x;
    dic.insert(x);
  }
  cout << dic.size();
}




