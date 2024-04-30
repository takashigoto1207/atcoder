#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int ans = 0, x;

  rep(i, 9) cin >> x, ans += x;
  rep(i, 8) cin >> x, ans -= x;
  cout << ans + 1 << endl;
  return 0;
}