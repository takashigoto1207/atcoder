#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int x1, y1, r, x2, y2, x3, y3;
  cin >> x1 >> y1 >> r >> x2 >> y2 >> x3 >> y3;

  if (x2 <= x1 - r && x1 + r <= x3 && y2 <= y1 - r && y1 + r <= y3)
    cout << "NO" << endl;
  else
    cout << "YES" << endl;
  if ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1) <= r * r &&
      (x3 - x1) * (x3 - x1) + (y2 - y1) * (y2 - y1) <= r * r &&
      (x2 - x1) * (x2 - x1) + (y3 - y1) * (y3 - y1) <= r * r &&
      (x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1) <= r * r)
    cout << "NO" << endl;
  else
    cout << "YES" << endl;
  return 0;
}