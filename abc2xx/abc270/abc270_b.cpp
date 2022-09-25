#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int X, Y, Z;
  cin >> X >> Y >> Z;

  if (Y < 0) X = -X, Y = -Y, Z = -Z;

  if (X < Y) {
    cout << abs(X) << endl;
  } else {
    if (Z > Y)
      cout << -1 << endl;
    else
      cout << abs(Z) + abs(X - Z) << endl;
  }
  return 0;
}