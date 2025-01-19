#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, D;
  cin >> N >> D;

  vector<int> T(N), L(N);
  rep(i, N) cin >> T[i] >> L[i];
  for (int i = 1; i <= D; i++) {
    int ans = 0;
    rep(j, N) ans = max(ans, T[j] * (L[j] + i));
    cout << ans << endl;
  }
  return 0;
}