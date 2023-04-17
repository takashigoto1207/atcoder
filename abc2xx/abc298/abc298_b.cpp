#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<vector<int>> A(N, vector<int>(N)), B(N, vector<int>(N)),
      rA(N, vector<int>(N));
  rep(i, N) rep(j, N) cin >> A[i][j];
  rep(i, N) rep(j, N) cin >> B[i][j];

  rep(r, 4) {
    bool flg = true;
    rep(i, N) rep(j, N) if (A[i][j] == 1 && B[i][j] != 1) flg = false;
    if (flg) {
      cout << "Yes" << endl;
      return 0;
    }
    rep(i, N) rep(j, N) rA[i][j] = A[N - j - 1][i];
    A = rA;
  }
  cout << "No" << endl;
  return 0;
}