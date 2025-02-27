#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int a, b, x, y;
  cin >> a >> b >> x >> y;

  int step = min(2 * x, y);
  if (a == b)
    cout << x << endl;
  else if (a > b)
    cout << (a - b - 1) * step + x << endl;
  else
    cout << (b - a) * step + x << endl;
  return 0;
}