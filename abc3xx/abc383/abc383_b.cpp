#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int H, W, D;
  cin >> H >> W >> D;
  vector<string> S(H);
  rep(i, H) cin >> S[i];

  int ans = 0;
  rep(i1, H) rep(j1, W) {
    if (S[i1][j1] == '#') continue;
    rep(i2, H) rep(j2, W) {
      if (S[i2][j2] == '#') continue;
      if (i1 == i2 && j1 == j2) continue;

      int cnt = 0;
      rep(i, H) rep(j, W) {
        if (S[i][j] == '#') continue;
        bool humid = false;
        if (abs(i - i1) + abs(j - j1) <= D) humid = true;
        if (abs(i - i2) + abs(j - j2) <= D) humid = true;
        if (humid) cnt++;
      }
      ans = max(ans, cnt);
    }
  }
  cout << ans << endl;
  return 0;
}