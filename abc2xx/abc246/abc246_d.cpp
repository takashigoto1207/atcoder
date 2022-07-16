#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

ll f(ll a, ll b) { return a * a * a + a * a * b + a * b * b + b * b * b; }

int main() {
  ll N;
  cin >> N;

  const ll M = 1e6;
  ll ans = 1e18;
  ll b = M;
  for (ll a = 0; a <= M; a++) {
    while (b > 0 && N <= f(a, b - 1)) b--;
    ans = min(ans, f(a, b));
  }
  cout << ans << endl;
  return 0;
}