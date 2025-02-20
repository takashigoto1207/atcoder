#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int T;
  cin >> T;

  vector<ll> ans;
  rep(i, T) {
    ll L, R, calc;
    cin >> L >> R;
    if (2 * L > R)
      calc = 0;
    else
      calc = (R - 2 * L + 1) * (R - 2 * L + 2) / 2;
    ans.push_back(calc);
  }

  rep(i, T) cout << ans[i] << endl;
  return 0;
}