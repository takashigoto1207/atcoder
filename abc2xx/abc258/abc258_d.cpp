#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, X;
  cin >> N >> X;
  vector<int> A(N), B(N);
  rep(i, N) cin >> A[i] >> B[i];

  ll ans = 2e18, calc = 0, mi = 1e18;
  rep(i, N) {
    calc += A[i] + B[i];
    mi = min<ll>(mi, B[i]);
    if (X < i + 1) continue;
    ans = min(ans, calc + mi * (X - i - 1));
  }
  cout << ans << endl;
  return 0;
}