#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int H, W;
  cin >> H >> W;
  vector<string> C(H);
  rep(i, H) cin >> C[i];

  vector dp(H, vector<int>(W, 0));
  for (int i = H - 1; i >= 0; i--) {
    for (int j = W - 1; j >= 0; j--) {
      if (C[i][j] == '#') continue;
      dp[i][j] = 1;
      if (i + 1 < H) dp[i][j] = max(dp[i][j], dp[i + 1][j] + 1);
      if (j + 1 < W) dp[i][j] = max(dp[i][j], dp[i][j + 1] + 1);
    }
  }
  cout << dp[0][0] << endl;
  return 0;
}