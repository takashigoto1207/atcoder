#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int n;
  double m;
  cin >> n >> m;

  double hs = 30 * (n % 12) + m / 2;
  double ms = m * 6;
  cout << min(abs(hs - ms), 360 - abs(hs - ms)) << endl;
  return 0;
}