#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<vector<ll>> A(2, vector<ll>(N));
  rep(i, 2) rep(j, N) cin >> A[i][j];

  ll ans = 0;
  rep(i, N) {
    ll calc = 0;
    for (int j = 0; j <= i; ++j) calc += A[0][j];
    for (int j = i; j < N; ++j) calc += A[1][j];
    ans = max(ans, calc);
  }
  cout << ans << endl;
  return 0;
}