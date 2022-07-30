#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

ll c[61][61];

int main() {
  int A, B;
  ll K;
  cin >> A >> B >> K;

  c[0][0] = 1;
  rep(i, 60) {
    rep(j, i + 1) {
      c[i + 1][j] += c[i][j];
      c[i + 1][j + 1] += c[i][j];
    }
  }

  string ans;
  while (A + B > 0) {
    ll x = 0;
    if (A >= 1) x = c[A + B - 1][A - 1];
    if (K <= x) {
      ans += 'a';
      A--;
    } else {
      ans += 'b';
      B--;
      K -= x;
    }
  }
  cout << ans << endl;
  return 0;
}