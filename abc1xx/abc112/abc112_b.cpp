#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, T;
  cin >> N >> T;

  int c, t;
  int ans = 1001;
  rep(i, N) {
    cin >> c >> t;
    if (t <= T) ans = min(ans, c);
  }
  if (ans == 1001) {
    cout << "TLE" << endl;
    return 0;
  }
  cout << ans << endl;
  return 0;
}