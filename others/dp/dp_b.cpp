#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> h(N);
  rep(i, N) cin >> h[i];

  vector<int> dp(N, INT_MAX);
  dp[0] = 0;
  dp[1] = abs(h[1] - h[0]);
  for (int i = 2; i < N; i++) {
    for (int j = 1; j <= min(K, i); j++)
      dp[i] = min(dp[i - j] + abs(h[i] - h[i - j]), dp[i]);
  }
  cout << dp[N - 1] << endl;
  return 0;
}