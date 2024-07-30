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

  bool f = true;
  rep(i, H) {
    rep(j, W) {
      if (S[i][j] == '#' && S[i][max(0, j - 1)] != '#' &&
          S[max(0, i - 1)][j] != '#' && S[i][min(W - 1, j + 1)] != '#' &&
          S[min(W - 1, i + 1)][j] != '#') {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}