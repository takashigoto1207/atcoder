#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int X, Y;
  cin >> X >> Y;

  double cnt = 0;
  rep(i, 6) rep(j, 6) if (X <= i + j + 2 || Y <= abs(i - j)) cnt++;

  cout << setprecision(10) << cnt / 36 << endl;
  return 0;
}