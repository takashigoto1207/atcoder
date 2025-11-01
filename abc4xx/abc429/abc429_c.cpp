#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  map<int, ll> mp;
  rep(i, N) {
    int A;
    cin >> A;
    mp[A]++;
  }

  ll ans = 0;
  for (auto x : mp) ans += x.second * (x.second - 1) * (N - x.second) / 2;

  cout << ans << endl;
  return 0;
}