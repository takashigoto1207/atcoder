#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> T(N);
  rep(i, N) cin >> T[i];

  ll ans = 1;
  rep(i, N) {
    ll calc = __gcd(ans, T[i]);
    ans = ans / calc * T[i];
  }
  cout << ans << endl;
  return 0;
}