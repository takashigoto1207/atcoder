#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> A(M);
  rep(i, M) cin >> A[i];

  vector<vector<int>> X(N, vector<int>(M));
  rep(i, N) rep(j, M) cin >> X[i][j];

  rep(i, M) {
    int calc = 0;
    rep(j, N) calc += X[j][i];
    if (calc < A[i]) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}