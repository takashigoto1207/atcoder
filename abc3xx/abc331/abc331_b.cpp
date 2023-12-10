#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, S, M, L;
  cin >> N >> S >> M >> L;
  int ans = INT_MAX;
  rep(a, 20) {
    rep(b, 15) {
      rep(c, 10) {
        if (a * 6 + b * 8 + c * 12 >= N) ans = min(ans, a * S + b * M + c * L);
      }
    }
  }
  cout << ans << endl;
  return 0;
}