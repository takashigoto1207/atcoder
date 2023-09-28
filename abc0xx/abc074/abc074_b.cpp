#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> x(N);
  rep(i, N) cin >> x[i];

  int ans = 0;
  rep(i, N) ans += 2 * min(x[i], K - x[i]);
  cout << ans << endl;
  return 0;
}