#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

struct V {
  int x, y;
  V(int x = 0, int y = 0) : x(x), y(y) {}
  V operator-(const V& a) const { return V(x - a.x, y - a.y); }
  int cross(const V& a) const { return x * a.y - y * a.x; }
  int ccw(const V& a) const {
    int area = cross(a);
    if (area > 0) return +1;  // ccw
    if (area < 0) return -1;  // cw
    return 0;                 // collinear
  }
};

int main() {
  vector<V> p(4);
  rep(i, 4) cin >> p[i].x >> p[i].y;
  rep(i, 4) {
    V A = p[i];
    V B = p[(i + 1) % 4];
    V C = p[(i + 2) % 4];
    V p = B - A, q = C - A;
    if (p.ccw(q) != 1) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}