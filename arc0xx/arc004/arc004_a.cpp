#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<double> X(N);
  vector<double> Y(N);
  rep(i, N) cin >> X[i] >> Y[i];

  double ans = 0;
  rep(i, N) for (int j = i + 1; j < N; j++) ans =
      max(ans, sqrt(pow(X[j] - X[i], 2) + pow(Y[j] - Y[i], 2)));

  cout << setprecision(10) << ans << endl;
  return 0;
}