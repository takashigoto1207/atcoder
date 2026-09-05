#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<vector<int>> A(N);
  int C;
  rep(i, N) {
    cin >> C;
    rep(j, C) {
      int a;
      cin >> a;
      A[i].push_back(a);
    }
  }

  int X;
  cin >> X;

  vector<vector<int>> ans(37);
  rep(i, N) rep(j, A[i].size()) if (X == A[i][j]) ans[A[i].size() - 1]
      .push_back(i + 1);

  rep(i, 37) {
    if (ans[i].size() == 0) continue;
    cout << ans[i].size() << endl;
    rep(j, ans[i].size()) cout << ans[i][j] << " ";
    cout << endl;
    return 0;
  }
  cout << 0 << endl;
  return 0;
}