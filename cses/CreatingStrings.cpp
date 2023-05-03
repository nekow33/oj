// https://cses.fi/problemset/task/1622

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

char ar[10];
int n;
vector<string> ans;

void swap(int i, int j) {
  char c = ar[i];
  ar[i] = ar[j];
  ar[j] = c;
}

bool isUsed(int k, int i) {
  for (int j = k; j < i; ++j) 
    if (ar[j] == ar[i]) return true;
  return false;
}

void perm(int start, int end) {
  if (start > end) return;
  if (start == end) 
    ans.emplace_back(string(ar));
  for (int i = start; i <= end; ++i) {
    if (isUsed(start, i)) continue;
    swap(start, i);
    perm(start + 1, end);
    swap(start, i);
  }
}

int main() {
  string input;
  cin >> input;
  n = input.size();
  for (int i = 0; i < n; ++i)
    ar[i] = input[i];
  perm(0, n - 1);
  sort(ans.begin(), ans.end());
  cout << ans.size() << '\n';
  for (string s: ans)
    cout << s << '\n';
  return 0;
}



