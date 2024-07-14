#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int xa, ya, xb, yb, xc, yc;
  cin >> xa >> ya >> xb >> yb >> xc >> yc;
  int a = pow(xb - xc, 2) + pow(yb - yc, 2);
  int b = pow(xa - xc, 2) + pow(ya - yc, 2);
  int c = pow(xa - xb, 2) + pow(ya - yb, 2);
  if ((a + b == c) || (b + c == a) || (a + c == b))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}