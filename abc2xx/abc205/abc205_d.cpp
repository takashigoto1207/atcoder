#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll N, Q;
  cin >> N >> Q;

  vector<ll> A(N);
  rep(i, N) cin >> A[i];

  vector<ll> c(N);
  rep(i, N) c[i] = A[i] - i - 1;

  rep(i, Q) {
    ll K;
    cin >> K;
    int r = lower_bound(c.begin(), c.end(), K) - c.begin();
    ll ans = 0;
    if (r == 0)
      ans = K;
    else
      ans = A[r - 1] + (K - c[r - 1]);
    cout << ans << endl;
  }
  return 0;
}