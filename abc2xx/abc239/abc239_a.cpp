#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll H;
  cin >> H;

  cout << fixed << setprecision(10) << sqrt(H * (12800000 + H)) << endl;
  return 0;
}