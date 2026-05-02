#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int L, X, Y, S, D;
  cin >> L >> X >> Y >> S >> D;

  double ans = (double)((D - S + L) % L) / (X + Y);
  if (X < Y) ans = min(ans, (double)((S - D + L) % L) / (Y - X));
  cout << setprecision(10) << ans << endl;
  return 0;
}