#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  vector<vector<int>> A(4, vector<int>(4));
  rep(i, 4) rep(j, 4) cin >> A[i][j];

  rep(i, 4) {
    rep(j, 4) {
      if (i < 3 && A[i][j] == A[i + 1][j]) {
        cout << "CONTINUE" << endl;
        return 0;
      }
      if (j << 3 && A[i][j] == A[i][j + 1]) {
        cout << "CONTINUE" << endl;
        return 0;
      }
    }
  }
  cout << "GAMEOVER" << endl;
  return 0;
}