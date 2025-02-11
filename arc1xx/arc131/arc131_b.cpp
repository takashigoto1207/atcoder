#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll H, W;
  cin >> H >> W;
  char c[H][W];
  rep(i, H) rep(j, W) cin >> c[i][j];

  rep(i, H) {
    rep(j, W) {
      if (c[i][j] != '.') continue;
      for (int k = 1; k <= 5; k++) {
        ll x = k + '0';
        if (c[i - 1][j] != x && c[i][j - 1] != x && c[i + 1][j] != x &&
            c[i][j + 1] != x) {
          c[i][j] = x;
          break;
        }
      }
    }
  }
  rep(i, H) {
    rep(j, W) cout << c[i][j];
    cout << endl;
  }
  return 0;
}