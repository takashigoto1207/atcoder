#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<double> X(5 * N);
  rep(i, 5 * N) cin >> X[i];
  sort(X.begin(), X.end());

  double ans = 0;
  rep(i, 3 * N) ans += X[i + N];
  ans /= (3 * N);

  cout << fixed << setprecision(10) << ans << endl;
  return 0;
}