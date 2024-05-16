#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll X, K, D;
  cin >> X >> K >> D;
  X = abs(X);

  ll t = min(K, X / D);
  K -= t;
  X -= t * D;
  if (K % 2 == 0) {
    cout << X << endl;
  } else {
    cout << D - X << endl;
  }
  return 0;
}