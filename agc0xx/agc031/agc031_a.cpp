#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  string S;
  cin >> N >> S;

  map<char, ll> mp;
  for (char c : S) mp[c]++;

  ll ans = 1, mod = 1000000007;
  for (auto x : mp) ans *= (x.second + 1), ans %= mod;
  cout << ans - 1 << endl;
  return 0;
}