#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;
using mint = modint998244353;

int main() {
  int N, M, K;
  cin >> N >> M >> K;
  if (K == 0) {
    mint ans = mint(M).pow(N);
    cout << ans.val() << endl;
    return 0;
  }

  vector<mint> dp(M, 1);
  for (int i = 1; i < N; ++i) {
    vector<mint> p(M);
    swap(dp, p);
    vector<mint> s(M + 1);
    rep(j, M) s[j + 1] = s[j] + p[j];
    auto sum = [&](int l, int r) -> mint {
      if (l > r) return 0;
      return s[r + 1] - s[l];
    };
    rep(j, M) dp[j] = sum(0, j - K) + sum(j + K, M - 1);
  }

  mint ans = 0;
  rep(i, M) ans += dp[i];
  cout << ans.val() << endl;
  return 0;
}