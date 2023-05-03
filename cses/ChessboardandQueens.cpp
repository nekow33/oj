//https://cses.fi/problemset/task/1624/
#include <iostream>
#include <string>
using namespace std;

int ar[8][8], sx[15], sy[15], col[8], ans;
string line;

void dfs(int i) {
  if (i == 8) {
    ++ans;
    return;
  }
  for (int j = 0; j < 8; ++j) {
    if (ar[i][j] == 0 && col[j] == 0 && sx[i-j+7] == 0 && sy[i+j] == 0) {
      col[j] = 1;
      sx[i-j+7] = 1;
      sy[i+j] = 1;
      dfs(i+1);
      sy[i+j] = 0;
      sx[i-j+7] = 0;
      col[j] = 0;
    }
  }
}

int main() {
  for (int i = 0; i < 8; ++i) {
    cin >> line;
    for (int j = 0; j < 8; ++j) 
      ar[i][j] = line[j] == '*' ? 1 : 0;
  }
  dfs(0);
  cout << ans;
}
