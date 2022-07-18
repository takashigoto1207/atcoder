#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll N, X, Y;
  cin >> N >> X >> Y;

  vector<ll> r(N + 1, 0), b(N + 1, 0);
  r[N] = 1;
  for (int i = N; i >= 2; i--) {
    r[i - 1] += r[i], b[i] += r[i] * X, r[i] = 0;
    r[i - 1] += b[i], b[i - 1] += b[i] * Y, b[i] = 0;
  }
  cout << b[1] << endl;
  return 0;
}