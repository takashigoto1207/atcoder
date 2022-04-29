#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  vector<vector<int>> a(2, vector<int>(N));
  vector<vector<bool>> dp(N, vector<bool>(2));
  rep(i, 2) rep(j, N) cin >> a[i][j];
  dp[0][0] = dp[0][1] = true;

  for (int i = 1; i < N; i++) {
    rep(j, 2) {
      rep(x, 2) {
        if (!dp[i - 1][x]) continue;
        if (abs(a[x][i - 1] - a[j][i]) > K) continue;
        dp[i][j] = true;
      }
    }
  }
  rep(i, 2) {
    if (dp[N - 1][i]) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}