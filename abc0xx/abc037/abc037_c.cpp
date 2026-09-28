#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll N, K;
  cin >> N >> K;

  vector<ll> a(N);
  rep(i, N) cin >> a[i];

  ll ans = 0, calc = 0;
  rep(i, K) calc += a[i];
  ans = calc;
  rep(i, N - K) calc = calc - a[i] + a[i + K], ans += calc;
  cout << ans << endl;
  return 0;
}