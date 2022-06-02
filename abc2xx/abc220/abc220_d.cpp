#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;
using mint = modint998244353;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  rep(i, N) cin >> A[i];

  vector<mint> dp(10, 0);
  dp[A[0]] = 1;
  for (int i = 1; i < N; i++) {
    int na = A[i];
    vector<mint> p(10, 0);
    swap(p, dp);
    rep(j, 10) {
      dp[(j + na) % 10] += p[j];
      dp[(j * na) % 10] += p[j];
    }
  }
  rep(i, 10) cout << dp[i].val() << endl;
  return 0;
}