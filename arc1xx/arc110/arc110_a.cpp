#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

int main() {
  int N;
  cin >> N;

  ll ans = 1;
  for (int i = 1; i <= N; i++) {
    ll calc = gcd(ans, i);
    ans = ans * i / calc;
  }
  cout << ans + 1 << endl;
  return 0;
}