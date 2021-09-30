class Solution {
public:
    int rot(vector<vector<int>>& g, int i, int j, int d) {
  if (i < 0 || j < 0 || i >= g.size() || j >= g[i].size() || g[i][j] != 1) return 0;
  g[i][j] = d + 3;
  return 1;
}
int orangesRotting(vector<vector<int>>& g, int d = 0, int fresh = 0) {
  for (auto i = 0; i < g.size(); ++i) 
    fresh += count_if(begin(g[i]), end(g[i]), [](int j) { return j == 1; });
  for (auto old_fresh = fresh; fresh > 0; ++d) {
    for (auto i = 0; i < g.size(); ++i)
      for (auto j = 0; j < g[i].size(); ++j)
        if (g[i][j] == d + 2)
          fresh -= rot(g,i+1,j,d) + rot(g,i-1,j,d) + rot(g,i,j+1,d) + rot(g,i,j-1,d);
    if (fresh == exchange(old_fresh, fresh)) return -1;
  }
  return d;
}
};