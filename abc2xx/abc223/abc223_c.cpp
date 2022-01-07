#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<double> A(N), B(N);
  rep(i, N) cin >> A[i] >> B[i];

  double t = 0, ans = 0;
  rep(i, N) t += A[i] / B[i];
  t /= 2;

  rep(i, N) {
    if (t > A[i] / B[i]) {
      t -= A[i] / B[i];
      ans += A[i];
    } else {
      ans += t * B[i];
      break;
    }
  }
  cout << fixed << setprecision(10) << ans << endl;
  return 0;
}