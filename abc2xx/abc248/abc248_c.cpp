#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

const int mod = 998244353;

int main() {
  int N, M, K;
  cin >> N >> M >> K;

  vector<vector<int>> dp(N + 1, vector<int>(K + 1));
  dp[0][0] = 1;
  for (int i = 1; i <= N; i++) {
    rep(j, K + 1) {
      int calc = 0;
      for (int k = 1; k <= M; k++) {
        if (j - k >= 0) {
          calc += dp[i - 1][j - k];
          calc %= mod;
        }
      }
      dp[i][j] = calc;
    }
  }

  int ans = 0;
  rep(i, K + 1) {
    ans += dp[N][i];
    ans %= mod;
  }
  cout << ans << endl;
  return 0;
}