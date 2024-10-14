#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> X(N + 2), Y(N + 2);
  X[0] = 0, Y[0] = 0;
  rep(i, N) cin >> X[i + 1] >> Y[i + 1];
  X[N + 1] = 0, Y[N + 1] = 0;

  double ans = 0;
  rep(i, N + 1) ans += sqrt((X[i + 1] - X[i]) * (X[i + 1] - X[i]) +
                            (Y[i + 1] - Y[i]) * (Y[i + 1] - Y[i]));
  cout << fixed << setprecision(10) << ans << endl;
  return 0;
}