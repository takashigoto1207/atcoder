#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int H, W;
  cin >> H >> W;

  vector<string> C(H);
  rep(i, H) cin >> C[i];

  int t = H, b = -1, l = W, r = -1;
  rep(i, H) rep(j, W) if (C[i][j] == '#') {
    t = min(t, i);
    b = max(b, i);
    l = min(l, j);
    r = max(r, j);
  }

  for (int i = t; i <= b; i++) {
    for (int j = l; j <= r; j++) cout << C[i][j];
    cout << endl;
  }
  return 0;
}