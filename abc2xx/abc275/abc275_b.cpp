#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;
const ll mod = 998244353;

ll f(ll x, ll y, ll z) {
  x %= mod, y %= mod, z %= mod;
  return (((x * y) % mod) * z) % mod;
}

int main() {
  ll A, B, C, D, E, F;
  cin >> A >> B >> C >> D >> E >> F;

  cout << (f(A, B, C) - f(D, E, F) + mod) % mod << endl;
  return 0;
}