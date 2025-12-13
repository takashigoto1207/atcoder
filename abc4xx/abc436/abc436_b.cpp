#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int r = 0, c = (N - 1) / 2;
  vector<vector<int>> x(N, vector<int>(N, 0));
  x[r][c] = 1;
  for (int i = 2; i <= N * N; i++) {
    if (x[(r - 1 + N) % N][(c + 1) % N] == 0) {
      x[(r - 1 + N) % N][(c + 1) % N] = i;
      r = (r - 1 + N) % N;
      c = (c + 1) % N;
    } else {
      x[(r + 1) % N][c] = i;
      r = (r + 1) % N;
    }
  }

  rep(i, N) {
    rep(j, N) cout << x[i][j] << " ";
    cout << endl;
  }
  return 0;
}