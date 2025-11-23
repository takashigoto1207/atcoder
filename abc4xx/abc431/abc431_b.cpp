#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int X, N, Q;
  cin >> X >> N;

  vector<int> W(N);
  rep(i, N) cin >> W[i];

  cin >> Q;
  vector<int> P(Q);
  rep(i, Q) cin >> P[i];

  vector<bool> parts(N, false);
  vector<int> ans;
  rep(i, Q) {
    if (parts[P[i] - 1])
      X -= W[P[i] - 1];
    else
      X += W[P[i] - 1];

    parts[P[i] - 1] = !parts[P[i] - 1];
    ans.push_back(X);
  }

  rep(i, Q) cout << ans[i] << endl;
  return 0;
}