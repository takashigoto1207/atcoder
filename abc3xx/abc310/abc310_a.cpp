#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, P, Q;
  cin >> N >> P >> Q;

  vector<int> D(N);
  rep(i, N) cin >> D[i];

  int ans = P;
  rep(i, N) ans = min(ans, Q + D[i]);
  cout << ans << endl;
  return 0;
}