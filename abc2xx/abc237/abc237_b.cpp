#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int H, W;
  cin >> H >> W;

  int A[H][W];
  rep(i, H) rep(j, W) cin >> A[i][j];

  rep(i, W) {
    rep(j, H) cout << A[j][i] << " ";
    cout << endl;
  }
  return 0;
}