#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> x(N);
  rep(i, N) cin >> x[i];

  ll m = 0, e = 0, c = 0;
  rep(i, N) {
    m += abs(x[i]);
    e += x[i] * x[i];
    c = max(c, abs(x[i]));
  }
  cout << m << endl;
  cout << setprecision(10) << sqrt(e) << endl;
  cout << c << endl;
  return 0;
}