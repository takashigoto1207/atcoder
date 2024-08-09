#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int a, b, c, d, e, f, g, h, i, j, k, l;
  cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l;
  if (a < j && g < d && b < k && h < e && c < l && i < f)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}