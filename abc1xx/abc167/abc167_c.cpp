#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M, X;
  cin >> N >> M >> X;

  vector<int> C(N);
  int A[N][M];

  rep(i, N) {
    cin >> C[i];
    rep(j, M) cin >> A[i][j];
  }

  int ans = INT_MAX;
  rep(i, 1 << N) {
    int cost = 0;
    vector<int> d(M);
    rep(j, N) {
      if (i >> j & 1) {
        cost += C[j];
        rep(k, M) d[k] += A[j][k];
      }
    }
    bool f = true;
    rep(i, M) if (d[i] < X) f = false;
    if (f) ans = min(ans, cost);
  }

  if (ans == INT_MAX)
    cout << -1 << endl;
  else
    cout << ans << endl;
  return 0;
}