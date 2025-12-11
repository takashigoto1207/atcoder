#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  vector<string> S(N), T(M);
  rep(i, N) cin >> S[i];
  rep(i, M) cin >> T[i];

  rep(i, N - M + 1) {
    rep(j, N - M + 1) {
      bool flg = true;
      rep(k, M) rep(l, M) {
        if (S[i + k][j + l] != T[k][l]) {
          flg = false;
          break;
        }
      }
      if (flg) {
        cout << i + 1 << " " << j + 1 << endl;
        return 0;
      }
    }
  }
  return 0;
}