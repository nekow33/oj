// https://cses.fi/problemset/task/1755
#include <iostream>
#include <string>
using namespace std;
const int N = 1e6+5;
int ar[26], ans[N];
int flag, l, r;
int main() {
  string str;
  cin >> str;
  for (char c: str) 
    ar[c-'A']++;
  l = 0, r = str.size() - 1;
  for (int i = 0; i < 26; ++i) {
    if (ar[i] % 2 == 1) {
      if (flag == 1) {
        cout << "NO SOLUTION\n";
        return 0;
      } else {
        ans[str.size() / 2] = 'A' + i;
        ar[i]--, flag = 1;
      }
    }
    while (ar[i]) {
      ans[l++] = ans[r--] = 'A' + i;
      ar[i] -= 2;
    }
  }

  for (int i = 0; i < str.size(); ++i) printf("%c", ans[i]);
}
    



