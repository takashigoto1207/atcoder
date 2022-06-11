#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int R, C;
  cin >> R >> C;

  int dp[2][2];
  rep(i, 2) rep(j, 2) cin >> dp[i][j];
  cout << dp[R - 1][C - 1] << endl;
  return 0;
}