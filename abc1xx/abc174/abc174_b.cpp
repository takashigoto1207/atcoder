#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  ll N, D;
  cin >> N >> D;

  int ans = 0;
  rep(i, N) {
    ll X, Y;
    cin >> X >> Y;
    if (X * X + Y * Y <= D * D) ans++;
  }
  cout << ans << endl;
  return 0;
}