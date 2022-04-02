#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  int x1, x2, x3, y1, y2, y3, xans, yans;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

  if (x1 == x2) xans = x3;
  if (x2 == x3) xans = x1;
  if (x3 == x1) xans = x2;

  if (y1 == y2) yans = y3;
  if (y2 == y3) yans = y1;
  if (y3 == y1) yans = y2;

  cout << xans << " " << yans << endl;
  return 0;
}