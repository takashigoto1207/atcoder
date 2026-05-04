#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  map<int, int> d1, d2, d3;
  int A;
  rep(i, 6) cin >> A, d1[A]++;
  rep(i, 6) cin >> A, d2[A]++;
  rep(i, 6) cin >> A, d3[A]++;

  double calc = d1[4] * d2[5] * d3[6] + d1[4] * d2[6] * d3[5] +
                d1[5] * d2[4] * d3[6] + d1[5] * d2[6] * d3[4] +
                d1[6] * d2[4] * d3[5] + d1[6] * d2[5] * d3[4];
  cout << setprecision(10) << calc / 216 << endl;
  return 0;
}