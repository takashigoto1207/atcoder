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
  vector<ll> calc(N);
  calc[0] = 0;

  rep(i, N) cin >> A[i];
  rep(i, N) if (i >= 1) calc[i] = calc[i - 1] + A[N - i];

  ll ans = 0;
  rep(i, N) {
    ans += (N - 1) * A[i] * A[i];
    if (i != N) ans -= 2 * A[i] * calc[N - 1 - i];
  }
  cout << ans << endl;
  return 0;
}