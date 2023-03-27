#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int R, C;
  cin >> R >> C;

  vector<string> B(R);
  rep(i, R) cin >> B[i];

  vector explode(R, vector<bool>(C, false));
  rep(i, R) {
    rep(j, C) {
      if (!isdigit(B[i][j])) continue;
      int power = B[i][j] - '0';
      rep(p, R) rep(q, C) if (abs(i - p) + abs(j - q) <= power) explode[p][q] =
          true;
    }
  }

  rep(i, R) rep(j, C) if (explode[i][j]) B[i][j] = '.';
  for (string x : B) cout << x << endl;
  return 0;
}