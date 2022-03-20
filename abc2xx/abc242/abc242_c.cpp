#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

const int mod = 998244353;
void add(int& x, int y) {
  x += y;
  x %= mod;
}
int dp[1000005][10];

int main() {
  int N;
  cin >> N;

  for (int i = 1; i <= 9; i++) dp[1][i] = 1;
  for (int i = 2; i <= N; i++) {
    for (int j = 1; j <= 9; j++) {
      if (1 <= j - 1) add(dp[i][j], dp[i - 1][j - 1]);
      add(dp[i][j], dp[i - 1][j]);
      if (j + 1 <= 9) add(dp[i][j], dp[i - 1][j + 1]);
    }
  }
  int ans = 0;
  for (int i = 1; i <= 9; i++) add(ans, dp[N][i]);
  cout << ans << endl;
  return 0;
}