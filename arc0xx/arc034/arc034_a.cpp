#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  double ans = 0;
  double a, b, c, d, e;
  rep(i, N) {
    cin >> a >> b >> c >> d >> e;
    ans = max(ans, a + b + c + d + (e * 110) / 900);
  }

  cout << setprecision(10) << ans << endl;
  return 0;
}