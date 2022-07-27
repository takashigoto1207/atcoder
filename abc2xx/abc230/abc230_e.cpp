#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  ll ans = 0;
  for (ll i = 1; i <= N;) {
    ll x = N / i;
    ll ni = N / x + 1;
    ans += x * (ni - i);
    i = ni;
  }
  cout << ans << endl;
  return 0;
}