#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int H, W;
  cin >> H >> W;

  vector<vector<int>> ans(H, vector<int>(W, 0));
  rep(i, H) {
    rep(j, W) {
      if (i - 1 >= 0) ans[i][j]++;
      if (i + 1 < H) ans[i][j]++;
      if (j - 1 >= 0) ans[i][j]++;
      if (j + 1 < W) ans[i][j]++;
    }
  }

  rep(i, H) {
    rep(j, W) {
      if (j > 0) cout << " ";
      cout << ans[i][j];
    }
    cout << endl;
  }
  return 0;
}