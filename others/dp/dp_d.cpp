#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, W;
  cin >> N >> W;

  vector<int> w(N), v(N);
  rep(i, N) cin >> w[i] >> v[i];

  vector<vector<ll>> dp(N + 1, vector<ll>(W + 1));
  rep(i, N) {
    rep(j, W + 1) {
      if (j >= w[i])
        dp[i + 1][j] = max(dp[i][j], dp[i][j - w[i]] + v[i]);
      else
        dp[i + 1][j] = dp[i][j];
    }
  }
  cout << dp[N][W] << endl;
  return 0;
}