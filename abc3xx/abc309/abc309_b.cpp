#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<vector<char>> A(N, vector<char>(N));
  rep(i, N) rep(j, N) cin >> A[i][j];

  vector<vector<char>> ans(N, vector<char>(N));
  rep(i, N) {
    rep(j, N) {
      if (i == 0 || j == 0 || i == N - 1 || j == N - 1) {
        if (i == 0 && j < N - 1) ans[i][j + 1] = A[i][j];
        if (i < N - 1 && j == N - 1) ans[i + 1][j] = A[i][j];
        if (i == N - 1 && j > 0) ans[i][j - 1] = A[i][j];
        if (i > 0 && j == 0) ans[i - 1][j] = A[i][j];
      } else {
        ans[i][j] = A[i][j];
      }
    }
  }

  rep(i, N) {
    rep(j, N) cout << ans[i][j];
    cout << endl;
  }
  return 0;
}