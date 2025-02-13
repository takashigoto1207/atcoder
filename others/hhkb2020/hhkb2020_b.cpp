#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int H, W;
  cin >> H >> W;

  vector<string> S(H);
  rep(i, H) cin >> S[i];

  int ans = 0;
  rep(i, H) {
    rep(j, W - 1) {
      if (S[i][j] == '.' && S[i][j + 1] == '.') ans++;
    }
  }

  rep(i, H - 1) {
    rep(j, W) {
      if (S[i][j] == '.' && S[i + 1][j] == '.') ans++;
    }
  }
  cout << ans << endl;
  return 0;
}