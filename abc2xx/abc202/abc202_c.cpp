#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> A(N), B(N), C(N), cnt(N + 1, 0);
  rep(i, N) cin >> A[i];
  rep(i, N) cin >> B[i];
  rep(i, N) cin >> C[i];
  rep(i, N) cnt[A[i]]++;

  ll ans = 0;
  rep(i, N) ans += cnt[B[C[i] - 1]];
  cout << ans << endl;
  return 0;
}