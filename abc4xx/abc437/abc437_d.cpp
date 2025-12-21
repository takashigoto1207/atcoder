#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<ll> A(N), B(M);
  rep(i, N) cin >> A[i];
  rep(i, M) cin >> B[i];

  ll ans = 0, mod = 998244353;
  sort(A.begin(), A.end());
  vector<ll> Ax(N + 1, 0);
  rep(i, N) Ax[i + 1] = Ax[i] + A[i];
  rep(i, M) {
    int x = lower_bound(A.begin(), A.end(), B[i]) - A.begin();
    ll low = (B[i] * x - Ax[x] + mod) % mod;
    ll high = (Ax[N] - Ax[x] - B[i] * (N - x) + mod) % mod;
    ans = (ans + low + high) % mod;
  }

  cout << ans % mod << endl;
  return 0;
}