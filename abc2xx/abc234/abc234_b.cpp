#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<double> x(N), y(N);
  double ans;
  rep(i, N) cin >> x[i] >> y[i];
  rep(i, N) {
    for (int j = i + 1; j < N; j++) {
      ans = max(ans, sqrt((x[i] - x[j]) * (x[i] - x[j]) +
                          (y[i] - y[j]) * (y[i] - y[j])));
    }
  }
  cout << fixed << setprecision(10) << ans << endl;
  return 0;
}