#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int M, D, y, m, d;
  cin >> M >> D >> y >> m >> d;

  if (m == M && d == D)
    cout << y + 1 << ' ' << 1 << ' ' << 1 << endl;
  else if (d == D)
    cout << y << ' ' << m + 1 << ' ' << 1 << endl;
  else
    cout << y << ' ' << m << ' ' << d + 1 << endl;
  return 0;
}