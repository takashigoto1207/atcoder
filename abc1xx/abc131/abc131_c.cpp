#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll A, B, C, D;
  cin >> A >> B >> C >> D;

  ll mul_C = B / C - (A - 1) / C;
  ll mul_D = B / D - (A - 1) / D;
  ll cd = C * D / gcd(C, D);
  ll mul_CD = B / cd - (A - 1) / cd;
  cout << B - A - mul_C + 1 - mul_D + mul_CD << endl;
  return 0;
}