#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll X, A, D, N;
  cin >> X >> A >> D >> N;

  if (D == 0) {
    cout << abs(A - X) << endl;
    return 0;
  } else if (D < 0) {
    A = A + D * (N - 1);
    D *= -1;
  }

  ll i = (X - A) / D;
  auto f = [&](ll i) {
    if (i < 0) i = 0;
    if (i >= N) i = N - 1;
    return A + D * i;
  };
  cout << min(abs(f(i) - X), abs(f(i + 1) - X)) << endl;
  return 0;
}