#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  vector<int> x;
  rep(i, 60) if (N & (1ll << i)) x.push_back(i);

  int t = x.size();
  vector<ll> ans;
  rep(i, 1 << t) {
    ll calc = 0;
    rep(j, t) if (i & (1 << j)) calc |= (1ll << x[j]);
    ans.push_back(calc);
  }

  sort(ans.begin(), ans.end());
  for (ll x : ans) cout << x << endl;
  return 0;
}