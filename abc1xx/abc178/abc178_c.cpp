#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;
const ll mod = 1000000007;

ll powmod(ll x, ll y) {
  ll res = 1;
  rep(i, y) res = res * x % mod;
  return res;
}

int main() {
  ll N;
  cin >> N;

  ll ans = powmod(10, N) - powmod(9, N) - powmod(9, N) + powmod(8, N);
  ans %= mod;
  ans = (ans + mod) % mod;
  cout << ans << endl;
}