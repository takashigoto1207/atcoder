#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int H, W, K;
  cin >> H >> W >> K;

  int ans = 0;
  char c[6][6];
  rep(i, H) rep(j, W) cin >> c[i][j];
  rep(i, 1 << H) {
    rep(j, 1 << W) {
      int cnt = 0;
      rep(x, H) {
        rep(y, W) {
          if (c[x][y] == '#' && (!(i & (1 << x))) && (!(j & (1 << y)))) cnt++;
        }
      }
      if (cnt == K) ans++;
    }
  }

  cout << ans << endl;
  return 0;
}