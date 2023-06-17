#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int H, W;
  cin >> H >> W;

  vector<string> S(H);
  rep(i, H) cin >> S[i];

  int U = INT_MAX, D = -INT_MAX, L = INT_MAX, R = -INT_MAX;
  rep(i, H) {
    rep(j, W) {
      if (S[i][j] == '#') {
        U = min(U, i), D = max(D, i);
        L = min(L, j), R = max(R, j);
      }
    }
  }
  for (int i = U; i <= D; i++) {
    for (int j = L; j <= R; j++) {
      if (S[i][j] == '.') cout << i + 1 << " " << j + 1 << endl;
    }
  }
  return 0;
}