#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll N;
  cin >> N;
  if (N % 2 == 1)
    cout << 0 << endl;
  else {
    ll ans = 0;
    ll calc = 5;
    while (calc <= N / 2) {
      ans += N / 2 / calc;
      calc *= 5;
    }
    cout << ans << endl;
  }
  return 0;
}