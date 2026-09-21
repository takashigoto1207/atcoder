#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int H, W;
  cin >> H >> W;

  vector<string> A(H);
  rep(i, H) cin >> A[i];

  rep(i, H) {
    rep(j, W) {
      if (A[i][j] == '#') {
        for (int k = i + 1; k < H; k++) {
          for (int l = j - 1; 0 <= l; l--) {
            if (A[k][l] == '#') {
              cout << "Impossible" << endl;
              return 0;
            }
          }
        }
      }
    }
  }
  cout << "Possible" << endl;
  return 0;
}