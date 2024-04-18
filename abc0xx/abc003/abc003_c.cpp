#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  vector<double> R(N);
  rep(i, N) cin >> R[i];
  sort(R.begin(), R.end());

  double ans = 0;
  rep(i, K) ans = (ans + R[N - K + i]) / 2;
  cout << setprecision(10) << ans << endl;
  return 0;
}