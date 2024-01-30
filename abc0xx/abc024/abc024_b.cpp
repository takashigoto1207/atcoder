#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll N, T;
  cin >> N >> T;

  vector<ll> A(N);
  rep(i, N) cin >> A[i];

  ll ans = N * T;
  for (int i = 1; i < N; i++) {
    if (A[i] - A[i - 1] < T) ans -= (T - A[i] + A[i - 1]);
  }
  cout << ans << endl;
  return 0;
}