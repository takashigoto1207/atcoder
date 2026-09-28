#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll N, T;
  cin >> N >> T;

  vector<ll> t(N);
  rep(i, N) cin >> t[i];

  ll ans = 0;
  rep(i, N - 1) ans += min(T, t[i + 1] - t[i]);
  ans += T;

  cout << ans << endl;
  return 0;
}