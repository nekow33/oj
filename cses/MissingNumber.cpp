// https://cses.fi/problemset/task/1083

#include <iostream>
using namespace std;
const int N = 2e5+5;

int n, t;
int ar[N];
int main() {
  cin >> n;
  for (int i = 1; i < n; ++i) {
    cin >> t;
    ar[t] = 1;
  }
  for (t = 1; t <= n; ++t) 
    if (ar[t] == 0) break;
  cout << t << endl;
  return 0;
}
  

