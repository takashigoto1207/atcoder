#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, Q;
  cin >> N >> Q;

  vector<int> X(Q), Y(Q), cnt(N + 1, 0);
  rep(i, Q) cin >> X[i] >> Y[i];
  rep(i, N) cnt[i + 1] = 1;

  int r = 0;
  rep(i, Q) {
    int ans = 0;
    while (r <= X[i]) {
      ans += cnt[r];
      cnt[r] = 0;
      r++;
    }
    cnt[Y[i]] += ans;
    cout << ans << endl;
  }
  return 0;
}