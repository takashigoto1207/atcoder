#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<ll> a(N), b(N), c(M), d(M);
  rep(i, N) cin >> a[i] >> b[i];
  rep(i, M) cin >> c[i] >> d[i];

  rep(i, N) {
    ll t = LONG_MAX;
    int ans = 0;
    rep(j, M) {
      ll calc = abs(a[i] - c[j]) + abs(b[i] - d[j]);
      if (t > calc) {
        t = calc;
        ans = j + 1;
      }
    }
    cout << ans << endl;
  }
  return 0;
}