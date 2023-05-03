
#include <iostream>
#include <vector>

using namespace std;

typedef pair<int, int> PII;

vector<PII> merge(vector<PII>& segs)
{
  vector<PII> ans;
  sort(segs.begin(), segs.end());
  int st=-2e9, ed=-239;
  for (auto seg : segs) {
    if (seg.first > ed) {
      if (st != -2e9) ans.push_back({st, ed});
      st = seg.first;
      ed = seg.second;
    } else {
      ed = max(ed, seg.second);
    }
  }
  if (ed != -2e9) ans.push_back({st, ed});
  return ans;
}

int main()
{
  int n, l, r;
  vector<PII> segs;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> l >> r;
    segs.push_back({l, r});
  }
  auto ans = merge(segs);
  cout << ans.size() << endl;
}

