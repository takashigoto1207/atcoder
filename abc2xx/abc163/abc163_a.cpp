#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int R;
  cin >> R;

  const double PI = acos(-1.0);
  double ans = 2 * R * PI;

  cout << setprecision(20) << ans << endl;
  return 0;
}