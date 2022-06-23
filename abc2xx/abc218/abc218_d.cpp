#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> x(N), y(N);
  rep(i, N) cin >> x[i] >> y[i];
  set<pair<int, int>> st;
  rep(i, N) st.emplace(x[i], y[i]);

  int ans = 0;
  rep(i, N) rep(j, N) {
    int xi = x[i], xj = x[j];
    int yi = y[i], yj = y[j];
    if (xi < xj && yi < yj) {
      if (st.find(pair(xi, yj)) == st.end()) continue;
      if (st.find(pair(xj, yi)) == st.end()) continue;
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}