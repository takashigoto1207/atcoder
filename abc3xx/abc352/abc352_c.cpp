#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> A(N), B(N);
  rep(i, N) cin >> A[i] >> B[i];

  ll ans = 0;
  rep(i, N) ans = max(ans, B[i] - A[i]);
  rep(i, N) ans += A[i];

  cout << ans << endl;
  return 0;
}