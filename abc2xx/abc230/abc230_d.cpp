#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N, D;
  cin >> N >> D;

  vector<P> p(N);
  rep(i, N) cin >> p[i].second >> p[i].first;
  sort(p.begin(), p.end());

  int ans = 0, x = -1;
  for (auto [r, l] : p) {
    if (l <= x) continue;
    ans++;
    x = r + D - 1;
  }
  cout << ans << endl;
  return 0;
}