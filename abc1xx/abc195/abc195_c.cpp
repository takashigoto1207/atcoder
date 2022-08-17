#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  ll ans = 0;
  if (N >= 1000) ans += N - 999;
  if (N >= 1000000) ans += N - 999999;
  if (N >= 1000000000) ans += N - 999999999;
  if (N >= 1000000000000) ans += N - 999999999999;
  if (N >= 1000000000000000) ans += N - 999999999999999;
  cout << ans << endl;
  return 0;
}