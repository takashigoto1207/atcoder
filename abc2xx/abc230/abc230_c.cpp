#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll N, A, B, P, Q, R, S;
  cin >> N >> A >> B >> P >> Q >> R >> S;

  ll h = Q - P + 1, w = S - R + 1;
  vector<string> ans(h, string(w, '.'));
  rep(i, h) rep(j, w) {
    ll x = P + i, y = R + j;
    if (x - y == A - B || x + y == A + B) ans[i][j] = '#';
  }
  rep(i, h) cout << ans[i] << endl;
  return 0;
}