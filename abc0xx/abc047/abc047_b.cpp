#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int W, H, N;
  cin >> W >> H >> N;

  int xl = 0, xr = W, yb = 0, yt = H;
  rep(i, N) {
    int x, y, a;
    cin >> x >> y >> a;
    if (a == 1) xl = max(xl, x);
    if (a == 2) xr = min(xr, x);
    if (a == 3) yb = max(yb, y);
    if (a == 4) yt = min(yt, y);
  }
  cout << max(0, xr - xl) * max(0, yt - yb);
  return 0;
}