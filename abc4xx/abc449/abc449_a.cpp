#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  double D;
  cin >> D;

  const double PI = acos(-1.0);
  cout << setprecision(10) << PI * (D / 2) * (D / 2) << endl;
  return 0;
}