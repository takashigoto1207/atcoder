#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  int a;
  vector<int> dp(N + 1, 0);
  dp[0] = 1;
  dp[1] = 1;
  rep(i, M) {
    cin >> a;
    dp[a] = -1;
  }

  for (int i = 2; i <= N; i++) {
    if (dp[i] >= 0) {
      dp[i] = max(0, dp[i - 1]) + max(0, dp[i - 2]);
      dp[i] %= 1000000007;
    }
  }
  cout << dp[N] << endl;
  return 0;
}