#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> t(N);
  rep(i, N) cin >> t[i];

  int ans = INT_MAX;
  rep(i, 1 << N) {
    int x = 0, y = 0;
    rep(j, N) {
      if (i & 1 << j)
        x += t[j];
      else
        y += t[j];
    }
    ans = min(ans, max(x, y));
  }
  cout << ans << endl;
  return 0;
}