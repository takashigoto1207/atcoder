#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int H, W;
  cin >> H >> W;

  vector<string> S(H, string(W, '.'));
  rep(i, H) {
    rep(j, W) {
      int A;
      cin >> A;
      if (A != 0) S[i][j] = 'A' + A - 1;
    }
  }
  rep(i, H) cout << S[i] << endl;
  return 0;
}