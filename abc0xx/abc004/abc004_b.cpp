#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  vector<vector<char>> c(4, vector<char>(4));
  rep(i, 4) rep(j, 4) cin >> c[i][j];

  rep(i, 4) {
    rep(j, 4) cout << c[3 - i][3 - j] << " ";
    cout << endl;
  }
  return 0;
}