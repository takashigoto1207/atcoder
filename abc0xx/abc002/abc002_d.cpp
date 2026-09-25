#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<vector<int>> f(12, vector<int>(12, 0));
  rep(i, M) {
    int x, y;
    cin >> x >> y;
    f[x - 1][y - 1] = 1;
    f[y - 1][x - 1] = 1;
  }

  int ans = 0;
  rep(i, (int)(1 << N)) {
    bool flg = true;
    rep(x, N) {
      for (int y = x + 1; y < N; y++)
        if ((i >> x & 1) && (i >> y & 1) && f[x][y] == 0) flg = false;
    }
    if (flg) ans = max(ans, __builtin_popcount(i));
  }
  cout << max(1, ans) << endl;
  return 0;
}