#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> A(N), s(N);
  rep(i, N) cin >> A[i];

  s[0] = A[0];
  rep(i, N - 1) s[i + 1] = s[i] + A[i + 1];

  ll ans = 0;
  rep(i, N - 1) ans += A[i + 1] * s[i];
  cout << ans << endl;
  return 0;
}