#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

const double PI = 3.14159265358979323846;

int main() {
  double a, b, h, m;
  cin >> a >> b >> h >> m;

  double ra = h * PI / 6 + m * PI / 360;
  double rb = m * PI / 30;
  double r = min(abs(ra - rb), 2 * PI - abs(ra - rb));
  double l = a * a + b * b - 2 * a * b * cos(r);
  l = sqrt(l);

  cout << std::setprecision(20) << l << endl;
  return 0;
}