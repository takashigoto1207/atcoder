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

  rep(i, H) {
    rep(j, W - 1) {
      if (S[i][j] == 'T' && S[i][j + 1] == 'T') {
        S[i][j] = 'P';
        S[i][j + 1] = 'C';
        j++;
      }
    }
  }
  rep(i, H) cout << S[i] << endl;
  return 0;
}