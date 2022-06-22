#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<pair<int, int>> lr(N), ans;
  rep(i, N) cin >> lr[i].first >> lr[i].second;
  sort(lr.begin(), lr.end());

  for (auto [l, r] : lr) {
    if (ans.size() == 0 || ans.back().second < l)
      ans.emplace_back(l, r);
    else
      ans.back().second = max(ans.back().second, r);
  }
  for (auto [l, r] : ans) cout << l << " " << r << endl;
  return 0;
}