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
  sort(A.begin(), A.end());

  ll ans = 0;
  rep(i, 2 * M - N) ans += pow(A[N - i - 1], 2);
  rep(i, N - M) ans += pow(A[i] + A[2 * N - 2 * M - i - 1], 2);

  cout << ans << endl;
  return 0;
}