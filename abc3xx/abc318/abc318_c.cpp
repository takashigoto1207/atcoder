#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll N, D, P;
  cin >> N >> D >> P;

  vector<ll> F(N);
  rep(i, N) cin >> F[i];
  sort(F.rbegin(), F.rend());

  ll ans = 0;
  for (ll i = 0; i < N; i += D) {
    ll calc = 0;
    for (ll j = i; j < min(i + D, N); j++) calc += F[j];
    ans += min(P, calc);
  }
  cout << ans << endl;
  return 0;
}