#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> a(N);
  rep(i, N) cin >> a[i];

  vector<int> dp(N, -1);
  dp[0] = 0;
  dp[1] = abs(a[1] - a[0]);

  for (int i = 2; i < N; i++)
    dp[i] =
        min(abs(a[i] - a[i - 1]) + dp[i - 1], abs(a[i] - a[i - 2]) + dp[i - 2]);
  cout << dp[N - 1] << endl;
  return 0;
}