#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M, L, P, Q, R;
  cin >> N >> M >> L >> P >> Q >> R;

  int ans = 0;
  ans = max(ans, (N / P) * (M / Q) * (L / R));
  ans = max(ans, (N / P) * (M / R) * (L / Q));
  ans = max(ans, (N / Q) * (M / P) * (L / R));
  ans = max(ans, (N / Q) * (M / R) * (L / P));
  ans = max(ans, (N / R) * (M / P) * (L / Q));
  ans = max(ans, (N / R) * (M / Q) * (L / P));
  cout << ans << endl;
  return 0;
}