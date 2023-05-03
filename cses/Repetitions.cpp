// https://cses.fi/problemset/task/1069

#include <iostream>
#include <string>
using namespace std;

int ans, cur;
char c;
string s;
int main() {
  cin >> s;
  c = s[0], cur = 1;
  for (int i = 1; i < s.size(); ++i) {
    if (s[i] == c) ++cur;
    else {
      ans = ans < cur ? cur : ans;
      cur = 1, c = s[i];
    }
  }
  ans = ans < cur ? cur : ans;
  cout << ans << endl;
  return 0;
}
  

