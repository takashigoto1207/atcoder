#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  map<string, int> mp;
  string S;
  rep(i, N) {
    cin >> S;
    mp[S]++;
  }

  int ms = 0;
  for (auto x : mp) ms = max(ms, x.second);

  vector<string> ans;
  for (auto x : mp)
    if (ms == x.second) ans.push_back(x.first);

  sort(ans.begin(), ans.end());
  rep(i, ans.size()) cout << ans[i] << endl;
  return 0;
}