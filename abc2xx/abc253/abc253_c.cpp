#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int Q;
  cin >> Q;

  vector<int> ans;
  map<int, int> mp;
  rep(i, Q) {
    int t;
    cin >> t;
    if (t == 1) {
      int x;
      cin >> x;
      mp[x]++;
    } else if (t == 2) {
      int x, c;
      cin >> x >> c;
      mp[x] -= min(c, mp[x]);
      if (mp[x] == 0) mp.erase(x);
    } else {
      ans.emplace_back(mp.rbegin()->first - mp.begin()->first);
    }
  }
  rep(i, ans.size()) cout << ans[i] << endl;
  return 0;
}