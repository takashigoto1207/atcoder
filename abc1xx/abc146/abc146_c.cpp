#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll A, B, X;
  cin >> A >> B >> X;

  ll ans = 0;
  for (int i = 1; i <= 11; i++) {
    ll calc = 1;
    rep(j, i) calc *= 10;
    if ((X - B * i) / A >= calc) continue;
    cout << min((ll)1000000000, (X - B * i) / A) << endl;
    return 0;
  }
  cout << 0 << endl;
  return 0;
}