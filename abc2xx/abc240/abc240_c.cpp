#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, X;
  cin >> N >> X;

  vector<int> a(N), b(N);
  rep(i, N) cin >> a[i] >> b[i];

  vector<vector<bool>> dp(N + 1, vector<bool>(X + 101, false));
  dp[0][0] = true;
  rep(i, N) {
    rep(j, X + 1) {
      if (dp[i][j]) {
        dp[i + 1][j + a[i]] = true;
        dp[i + 1][j + b[i]] = true;
      }
    }
  }
  if (dp[N][X])
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}