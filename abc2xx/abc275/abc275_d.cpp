#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

map<ll, ll> mp;
ll f(ll x) {
  if (x == 0) return 1;
  if (mp[x]) return mp[x];
  return mp[x] = f(x / 2) + f(x / 3);
}

int main() {
  ll N;
  cin >> N;

  cout << f(N) << endl;
  return 0;
}