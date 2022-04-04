#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  double A, B;
  cin >> A >> B;

  double d = sqrt(A * A + B * B);
  cout << fixed << setprecision(10) << A / d << " " << B / d << endl;
  return 0;
}