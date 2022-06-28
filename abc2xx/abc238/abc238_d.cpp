#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

vector<string> ans;
map<pair<ll, ll>, bool> mp;

bool f(ll a, ll s) {
  if (!s) return a == 0;
  auto p = make_pair(a, s);
  if (mp.count(p)) return mp[p];
  rep(x, 2) rep(y, 2) {
    if ((x & y) != (a & 1)) continue;
    if (s - x - y < 0) continue;
    if ((s - x - y) % 2 != 0) continue;
    if (f(a >> 1, (s - x - y) >> 1)) return mp[p] = true;
  }
  return mp[p] = false;
}

void solve() {
  ll a, s;
  cin >> a >> s;
  mp = map<pair<ll, ll>, bool>();
  if (f(a, s))
    ans.emplace_back("Yes");
  else
    ans.emplace_back("No");
}

int main() {
  int T;
  cin >> T;

  rep(i, T) solve();
  rep(i, T) cout << ans[i] << endl;
  return 0;
}