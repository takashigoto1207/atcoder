#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> p(N);
  rep(i, N) cin >> p[i];

  vector<int> cnt(N);
  rep(i, N) {
    int x = (p[i] - 1 - i + N) % N;
    rep(k, 3) cnt[(x + k) % N]++;
  }

  int ans = 0;
  rep(i, N) ans = max(ans, cnt[i]);
  cout << ans << endl;
  return 0;
}