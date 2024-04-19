#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  double xa, ya, xb, yb, xc, yc;
  cin >> xa >> ya >> xb >> yb >> xc >> yc;

  cout << setprecision(10)
       << (double)(abs((xb - xa) * (yc - ya) - (xc - xa) * (yb - ya)) / 2)
       << endl;
  return 0;
}