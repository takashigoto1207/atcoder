#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  long double W, H, x, y;
  cin >> W >> H >> x >> y;

  cout << setprecision(10) << (W * H) / 2 << " ";
  if (W / 2 == x && H / 2 == y)
    cout << 1 << endl;
  else
    cout << 0 << endl;
  return 0;
}