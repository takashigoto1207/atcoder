#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll X, K;
  cin >> X >> K;

  ll digits = 1;
  rep(i, K) {
    X /= digits;
    ll r = X % 10;
    if (r <= 4)
      X -= r;
    else
      X += (10 - r);
    X *= digits;
    digits *= 10;
  }
  cout << X << endl;
  return 0;
}