#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, Q;
  cin >> N >> Q;

  vector<int> A(N), X(Q);
  rep(i, N) cin >> A[i];
  rep(i, Q) cin >> X[i];
  sort(A.begin(), A.end());

  vector<ll> s(N + 1, 0);
  rep(i, N) s[i + 1] = s[i] + A[i];

  rep(i, Q) {
    int k = lower_bound(A.begin(), A.end(), X[i]) - A.begin();
    ll ans = (ll)k * X[i] - s[k];
    ans += (s[N] - s[k]) - ll(N - k) * X[i];
    cout << ans << endl;
  }
  return 0;
}