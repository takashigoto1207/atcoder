#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, W;
  cin >> N >> W;

  vector<pair<int, int>> c(N);
  rep(i, N) cin >> c[i].first >> c[i].second;
  sort(c.rbegin(), c.rend());

  ll ans = 0;
  rep(i, N) {
    ll x = min(W, c[i].second);
    ans += x * c[i].first;
    W -= x;
    if (W == 0) break;
  }
  cout << ans << endl;
  return 0;
}