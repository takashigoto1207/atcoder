#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  map<int, ll> mp;
  int A;
  rep(i, N) {
    cin >> A;
    mp[A]++;
  }

  ll ans = N * (N - 1) / 2;
  for (auto x : mp) ans -= x.second * (x.second - 1) / 2;
  cout << ans << endl;
  return 0;
}