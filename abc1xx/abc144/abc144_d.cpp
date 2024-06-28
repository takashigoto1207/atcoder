#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  double a, b, x;
  cin >> a >> b >> x;

  double ans = 0;
  if (a * a * b / 2 < x)
    ans = atan((2 * a * a * b - 2 * x) / a / a / a) * 180 / acos(-1.0);
  else
    ans = atan(a * b * b / 2 / x) * 180 / acos(-1.0);

  cout << fixed << setprecision(6) << ans << endl;
  return 0;
}