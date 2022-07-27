#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;
  vector<ll> X(N + 1), b(N + 1, 0);
  rep(i, N) cin >> X[i + 1];
  rep(i, M) {
    int C, Y;
    cin >> C >> Y;
    b[C] = Y;
  }

  const ll INF = 1e18;
  vector dp(N + 1, vector<ll>(N + 1, -INF));
  dp[0][0] = 0;
  for (int i = 1; i <= N; ++i) {
    rep(j, i + 1) {
      ll now = -INF;
      if (j == 0) {
        rep(k, N + 1) now = max(now, dp[i - 1][k]);
      } else {
        now = dp[i - 1][j - 1] + X[i] + b[j];
      }
      dp[i][j] = now;
    }
  }

  ll ans = 0;
  rep(j, N + 1) ans = max(ans, dp[N][j]);
  cout << ans << endl;
  return 0;
}