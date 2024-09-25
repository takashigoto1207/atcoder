#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int C;
  cin >> C;

  int h = 0, m = 0, l = 0;
  rep(i, C) {
    int N, M, L;
    cin >> N >> M >> L;
    h = max(h, max({N, M, L}));
    m = max(m, N + M + L - max({N, M, L}) - min({N, M, L}));
    l = max(l, min({N, M, L}));
  }

  int ans = h * m * l;
  cout << ans << endl;
  return 0;
}