#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll N, S, L;
  cin >> N >> S >> L;
  S--;

  vector<ll> A(N - 1);
  rep(i, N - 1) cin >> A[i];

  int ans = 1;
  vector<ll> d(N, 0);
  rep(i, N - 1) d[i + 1] = d[i] + A[i];
  rep(l, S + 1) {
    for (int r = S; r < N; r++) {
      ll x = d[S] - d[l], y = d[r] - d[S];
      if (min(2 * x + y, x + 2 * y) <= L) ans = max(ans, r - l + 1);
    }
  }
  cout << ans << endl;
  return 0;
}