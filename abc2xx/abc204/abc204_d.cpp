#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  bitset<100001> dp;
  dp[0] = 1;
  int total = 0;
  rep(i, N) {
    int t;
    cin >> t;
    total += t;
    dp |= dp << t;
  }
  int ans = total;
  rep(i, total + 1) if (dp[i]) ans = min(ans, max(i, (total - i)));
  cout << ans << endl;
  return 0;
}