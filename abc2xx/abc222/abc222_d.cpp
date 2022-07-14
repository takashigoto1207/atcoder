#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

using mint = modint998244353;

int main() {
  int N;
  cin >> N;
  vector<int> a(N), b(N);
  rep(i, N) cin >> a[i];
  rep(i, N) cin >> b[i];

  const int M = 3001;
  vector<mint> dp(M);
  dp[0] = 1;
  rep(i, N) {
    vector<mint> p(M);
    swap(dp, p);
    rep(j, M - 1) p[j + 1] += p[j];
    rep(j, M) {
      if (a[i] <= j && j <= b[i]) {
        dp[j] += p[j];
      }
    }
  }
  mint ans;
  rep(i, M) ans += dp[i];
  cout << ans.val() << endl;
  return 0;
}