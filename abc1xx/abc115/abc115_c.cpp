#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> h(N);
  rep(i, N) cin >> h[i];

  sort(h.begin(), h.end());
  int ans = INT_MAX;
  rep(i, N - K + 1) ans = min(ans, h[i + K - 1] - h[i]);
  cout << ans << endl;
  return 0;
}