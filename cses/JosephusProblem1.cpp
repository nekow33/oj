#include <iostream>
#include <vector>

using namespace std;

const int N = 2e5+5;
int ar[N][2];
int n, c, flag, pre, post;


int main() {
  cin >> n;
  for (int i = 1; i <= n; i++) ar[i][0] = i + 1, ar[i][1] = i - 1;
  ar[1][1] = n, ar[n][0] = 1;
  c = 1, flag = 0;
  while (ar[c][0] > 0) {
    if (flag) {
      cout << c << ' ';
      pre = ar[c][1], post = ar[c][0];
      ar[pre][0] = post, ar[post][1] = pre, ar[c][0] = -1, c = post;
    } else {
      c = ar[c][0];
    }
    flag = (flag + 1) % 2;
  }
  return 0;
}
