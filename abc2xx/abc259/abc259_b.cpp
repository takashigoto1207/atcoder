#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  double a, b, d;
  cin >> a >> b >> d;

  double theta = atan2(b, a);
  double r = sqrt(a * a + b * b);
  const double pi = acos(-1);
  theta += d / 180. * pi;

  cout << fixed << setprecision(10) << r * cos(theta) << " " << r * sin(theta)
       << endl;
  return 0;
}