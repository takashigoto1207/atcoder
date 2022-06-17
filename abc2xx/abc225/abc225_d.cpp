#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, Q;
  cin >> N >> Q;
  vector<int> front(N, -1), back(N, -1);
  vector<vector<int>> ans;

  rep(i, Q) {
    int c;
    cin >> c;
    if (c == 3) {
      int x;
      cin >> x;
      x--;
      while (front[x] != -1) x = front[x];
      vector<int> q = {x + 1};
      while (back[x] != -1) {
        x = back[x];
        q.push_back(x + 1);
      }
      ans.push_back(q);
    } else {
      int x, y;
      cin >> x >> y;
      x--, y--;
      if (c == 1)
        back[x] = y, front[y] = x;
      else
        back[x] = -1, front[y] = -1;
    }
  }
  rep(i, ans.size()) {
    cout << ans[i].size() << " ";
    rep(j, ans[i].size()) cout << ans[i][j] << " ";
    cout << endl;
  }
  return 0;
}