#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int calc(int y, int m, int d) {
  return 365 * y + y / 4 - y / 100 + y / 400 + 306 * (m + 1) / 10 + d - 429;
}

int main() {
  int y, m, d;
  cin >> y >> m >> d;

  if (m <= 2) {
    m += 12;
    y--;
  }
  cout << calc(2014, 5, 17) - calc(y, m, d) << endl;
  return 0;
}