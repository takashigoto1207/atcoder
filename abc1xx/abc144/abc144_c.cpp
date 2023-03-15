#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  ll ans = LLONG_MAX;
  for (ll i = 1; i * i <= N; i++)
    if (N % i == 0) ans = min(ans, i + N / i - 2);
  cout << ans << endl;
  return 0;
}