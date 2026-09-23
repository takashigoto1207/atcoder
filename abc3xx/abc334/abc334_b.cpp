#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll A, M, L, R;
  cin >> A >> M >> L >> R;

  L -= A, R -= A;
  if (L < 0) {
    ll x = -L / M + 1;
    L += x * M, R += x * M;
  }

  ll ans = R / M - (L - 1) / M;
  cout << ans << endl;
  return 0;
}