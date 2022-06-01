#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

ll sum(ll N, ll x) { return (x + (N / x) * x) * (N / x) / 2; }

int main() {
  ll N, A, B;
  cin >> N >> A >> B;

  ll ans = sum(N, 1) - sum(N, A) - sum(N, B) + sum(N, A * B / gcd(A, B));
  cout << ans << endl;
  return 0;
}