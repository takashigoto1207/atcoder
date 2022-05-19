#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  ll ans = 0;
  for (ll i = 1; i * i * i <= N; i++) {
    for (ll j = i; i * j * j <= N; j++) {
      ans += (N / i / j - j + 1);
    }
  }
  cout << ans << endl;
  return 0;
}