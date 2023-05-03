// https://cses.fi/problemset/task/1623
#include <iostream>
using namespace std;

using ull = unsigned long long;

ull sum, ans;
int n, ar[22];

int main() {
  cin >> n;
  for (int i = 0; i < n; ++i)
    cin >> ar[i], sum += ar[i];

  for (int i = 0; i < 1 << n; ++i) {
    ull currSum = 0;
    for (int j = 0; j < n; ++j) 
      if (i >> j & 1)
        currSum += ar[j];
    if (currSum <= sum / 2)
      ans = max(ans, currSum);
  }

  cout << sum - 2 * ans;
}
  

