#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll N, K;
  cin >> N >> K;

  vector<ll> H(N);
  rep(i, N) cin >> H[i];
  sort(H.begin(), H.end());

  ll ans = 0;
  rep(i, N - K) ans += H[i];
  cout << ans << endl;
  return 0;
}