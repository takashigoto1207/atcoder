#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> x(N), y(N), P(N), d(N, 0);
  rep(i, N) cin >> x[i] >> y[i] >> P[i];
  ll wa = 0, ac = 4e9;
  while (abs(wa - ac) > 1) {
    ll wj = (wa + ac) / 2;
    bool judge = [&] {
      vector<vector<ll>> d(N, vector<ll>(N, 0));
      rep(i, N) rep(j, N) {
        ll dist = abs(x[i] - x[j]) + abs(y[i] - y[j]);
        if (wj * P[i] >= dist) d[i][j] = 1;
      }
      rep(k, N) rep(i, N) rep(j, N) d[i][j] |= d[i][k] & d[k][j];
      rep(i, N) {
        bool ok = true;
        rep(j, N) if (d[i][j] != 1) ok = false;
        if (ok) return true;
      }
      return false;
    }();
    if (judge)
      ac = wj;
    else
      wa = wj;
  }
  cout << ac << endl;
  return 0;
}