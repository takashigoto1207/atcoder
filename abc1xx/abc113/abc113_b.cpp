#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  double A, T;
  cin >> N >> T >> A;

  vector<double> H(N);
  rep(i, N) cin >> H[i];

  int ans = 0;
  double m = INT_MAX;
  rep(i, N) {
    if (abs(T - H[i] * 0.006 - A) < m) {
      ans = i + 1;
      m = abs(T - H[i] * 0.006 - A);
    }
  }
  cout << ans << endl;
  return 0;
}