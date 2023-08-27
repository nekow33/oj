
class Solution {
  public:
    const int N = -2e9;
    vector<vector<int>> merge(vector<vector<int>> &intervals) {
      vector<vector<int>> ans;
      sort(intervals.begin(), intervals.end());
      int st = NA, ed = NA;
      for (auto seg : intervals) {
        if (seg[0] > ed) {
          if (ed != NA) {
            ans.push_back({st, ed});
          }
          st = seg[0], ed = seg[1];
        } else {
          ed = max(ed, seg[1]);
        }
      }
      if (ed != NA) {
        ans.push_back({st, ed});
      }
      return ans;
    }
}


