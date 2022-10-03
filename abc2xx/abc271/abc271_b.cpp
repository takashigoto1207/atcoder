#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, Q;
  cin >> N >> Q;

  vector<vector<int>> a(N);
  vector<int> s(Q), t(Q);

  rep(i, N) {
    int L;
    cin >> L;
    rep(j, L) {
      int x;
      cin >> x;
      a[i].emplace_back(x);
    }
  }

  rep(i, Q) cin >> s[i] >> t[i];
  rep(i, Q) cout << a[s[i] - 1][t[i] - 1] << endl;
  return 0;
}