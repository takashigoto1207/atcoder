#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  double D, H, d, h, ans = 0;
  cin >> N >> D >> H;

  rep(i, N) {
    cin >> d >> h;
    ans = max(ans, h - d * (H - h) / (D - d));
  }
  cout << fixed << setprecision(5) << ans << endl;
  return 0;
}