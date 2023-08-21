#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int c[3][3];
  rep(i, 3) rep(j, 3) cin >> c[i][j];

  if (c[0][0] + c[1][1] == c[1][0] + c[0][1] &&
      c[0][1] + c[1][2] == c[1][1] + c[0][2] &&
      c[1][0] + c[2][1] == c[2][0] + c[1][1] &&
      c[1][1] + c[2][2] == c[2][1] + c[1][2])
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}