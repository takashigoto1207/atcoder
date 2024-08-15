#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  ll K;
  cin >> N >> K;

  ll a, b;
  map<ll, ll> mp;
  rep(i, N) cin >> a >> b, mp[a] += b;

  ll calc = 0;
  for (auto x : mp) {
    calc += x.second;
    if (K <= calc) {
      cout << x.first << endl;
      return 0;
    }
  }
  return 0;
}