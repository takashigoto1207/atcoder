#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  map<string, ll> mp;
  string S;
  rep(i, N) {
    cin >> S;
    sort(S.begin(), S.end());
    mp[S]++;
  }

  ll ans = 0;
  for (auto x : mp)
    if (x.second >= 2) ans += x.second * (x.second - 1) / 2;
  cout << ans << endl;
  return 0;
}