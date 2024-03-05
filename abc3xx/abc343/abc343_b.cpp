#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<vector<int>> A(N, vector<int>(N));
  rep(i, N) rep(j, N) cin >> A[i][j];

  rep(i, N) {
    vector<int> ans;
    rep(j, N) if (A[i][j]) ans.push_back(j + 1);
    rep(j, ans.size()) {
      cout << ans[j];
      if (j != ans.size() - 1) cout << " ";
    }
    cout << endl;
  }
  return 0;
}