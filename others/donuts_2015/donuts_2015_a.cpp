#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  double R, D;
  cin >> R >> D;

  double PI = acos(-1.0);
  cout << setprecision(10) << 2 * R * R * D * PI * PI << endl;
  return 0;
}