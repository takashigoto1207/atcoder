#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll N, K, X;
  cin >> N >> K >> X;

  vector<ll> A(N);
  rep(i, N) cin >> A[i];

  ll ans = 0;
  rep(i, N) ans += A[i];

  ll cnt = 0;
  rep(i, N) cnt = min(cnt + A[i] / X, K);
  ans -= cnt * X, K -= cnt;

  rep(i, N) A[i] %= X;
  sort(A.rbegin(), A.rend());

  rep(i, N) {
    if (K == 0) break;
    ans -= A[i], K--;
  }

  cout << ans << endl;
  return 0;
}