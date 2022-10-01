#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<ll> A(N);
  rep(i, N) cin >> A[i];

  ll s = 0, t = 0;
  rep(i, M) s += A[i] * (i + 1);
  rep(i, M) t += A[i];

  ll ans = s;
  rep(i, N - M) {
    ll ns = s - t + A[i + M] * M;
    ll nt = t - A[i] + A[i + M];
    s = ns;
    t = nt;
    ans = max(ans, s);
  }
  cout << ans << endl;
  return 0;
}