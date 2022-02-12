#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;
using mint = modint998244353;

mint sum(ll x) { return mint(1 + x) * x / 2; }

int main() {
  ll N;
  cin >> N;

  ll l = 1;
  mint ans;
  while (l <= N) {
    ll r = l * 10;
    ll len = min(N + 1, r) - l;
    ans += sum(len);
    l *= 10;
  }
  cout << ans.val() << endl;
  return 0;
}