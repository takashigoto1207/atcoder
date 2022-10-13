#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  double Sx, Sy, Gx, Gy;
  cin >> Sx >> Sy >> Gx >> Gy;

  cout << fixed << setprecision(10) << Sx + (Gx - Sx) * Sy / (Sy + Gy) << endl;
  return 0;
}