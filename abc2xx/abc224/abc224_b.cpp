#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int H, W;
  cin >> H >> W;

  vector<vector<int>> A(H, vector<int>(W));
  rep(i, H) rep(j, W) cin >> A[i][j];

  rep(i, H - 1) {
    rep(j, W - 1) {
      if (A[i][j] + A[i + 1][j + 1] > A[i + 1][j] + A[i][j + 1]) {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}