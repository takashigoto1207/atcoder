#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;
  vector<bool> can(M, true);
  vector<int> ans(N, 0);

  rep(i, N) {
    int L;
    cin >> L;
    vector<int> X(L);
    rep(j, L) cin >> X[j];

    rep(j, L) if (can[X[j] - 1]) {
      can[X[j] - 1] = false;
      ans[i] = X[j];
      break;
    }
  }
  rep(i, N) cout << ans[i] << endl;
  return 0;
}