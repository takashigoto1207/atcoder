#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int T;
  cin >> T;
  vector<int> ans(T, 0);

  rep(i, T) {
    int N;
    cin >> N;
    vector<int> W(N), P(N), WP(N);
    rep(j, N) cin >> W[j] >> P[j], WP[j] = W[j] + P[j];
    sort(WP.begin(), WP.end());

    ll calc = 0;
    rep(j, N) calc += P[j];

    int cnt = 0;
    rep(j, N) if (WP[j] <= calc) cnt++, calc -= WP[j];
    ans[i] = cnt;
  }

  rep(i, T) cout << ans[i] << endl;
  return 0;
}