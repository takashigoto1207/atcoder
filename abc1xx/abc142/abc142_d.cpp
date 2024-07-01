#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll A, B;
  cin >> A >> B;
  ll calc = __gcd(A, B);
  int ans = 0;
  for (ll i = 1; i * i <= calc; i++) {
    if (calc % i == 0) ans++;
    while (i != 1 && calc % i == 0) calc /= i;
  }
  if (calc > 1) ans++;
  cout << ans << endl;
  return 0;
}