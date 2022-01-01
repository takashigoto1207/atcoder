#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  int B[N][M];
  rep(i, N) rep(j, M) cin >> B[i][j];

  rep(i, N) rep(j, M - 1) {
    if (B[i][j] + 1 != B[i][j + 1]) {
      cout << "No" << endl;
      return 0;
    }
    if (B[i][j] % 7 == 0) {
      cout << "No" << endl;
      return 0;
    }
  }
  rep(i, N - 1) if (B[i][0] + 7 != B[i + 1][0]) {
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;
  return 0;
}