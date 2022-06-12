#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  vector<double> A(K), X(N), Y(N);
  rep(i, K) cin >> A[i], A[i]--;
  rep(i, N) cin >> X[i] >> Y[i];

  double ans = 0;
  rep(i, N) {
    double r = 1e18;
    rep(j, K) r = min(r, sqrt((X[i] - X[A[j]]) * (X[i] - X[A[j]]) +
                              (Y[i] - Y[A[j]]) * (Y[i] - Y[A[j]])));
    ans = max(ans, r);
  }
  cout << setprecision(20) << ans << endl;
  return 0;
}