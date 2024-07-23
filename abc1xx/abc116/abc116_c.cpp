#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  int m = 0;
  vector<int> h(N);
  rep(i, N) {
    cin >> h[i];
    m = max(m, h[i]);
  }

  int ans = 0;
  rep(i, m) {
    bool w = false;
    rep(j, N) {
      if (h[j] != 0) {
        if (!w) ans++;
        w = true;
        h[j]--;
      } else
        w = false;
    }
  }
  cout << ans << endl;
  return 0;
}