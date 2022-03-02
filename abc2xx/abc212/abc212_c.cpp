#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<ll> A(N), B(M);
  rep(i, N) cin >> A[i];
  rep(i, M) cin >> B[i];
  sort(A.begin(), A.end());
  sort(B.begin(), B.end());

  ll ans = LLONG_MAX;
  int i = 0, j = 0;
  while (i < N && j < M) {
    ans = min(ans, abs(A[i] - B[j]));
    if (A[i] < B[j])
      i++;
    else
      j++;
  }
  cout << ans << endl;
  return 0;
}