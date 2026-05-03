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
  rep(i, N) cin >> A[i];

  ll calc = 1;
  ll ans = 0;
  rep(i, N) ans += calc * A[N - i - 1], calc *= 2;
  cout << ans << endl;
  return 0;
}