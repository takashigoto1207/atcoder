#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> A(N);
  rep(i, N) cin >> A[i];

  int cnt = 0;
  rep(i, N) if (A[i] < 0) cnt++;

  ll ans = 0;
  rep(i, N) ans += abs(A[i]);

  ll m = INT_MAX;
  if (cnt % 2 == 1) {
    rep(i, N) m = min(m, abs(A[i]));
    ans -= 2 * m;
  }
  cout << ans << endl;
  return 0;
}