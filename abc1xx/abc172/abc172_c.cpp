#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M, K;
  cin >> N >> M >> K;

  vector<int> A(N), B(M);
  rep(i, N) cin >> A[i];
  rep(i, M) cin >> B[i];

  ll calc = 0;
  rep(i, M) calc += B[i];

  int j = M;
  int ans = 0;
  rep(i, N + 1) {
    while (j > 0 && calc > K) j--, calc -= B[j];
    if (calc > K) break;
    ans = max(ans, i + j);
    if (i == N) break;
    calc += A[i];
  }
  cout << ans << endl;
  return 0;
}