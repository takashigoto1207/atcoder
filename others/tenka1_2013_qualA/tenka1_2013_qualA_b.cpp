#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, V, W, X, Y, Z, ans = 0;
  cin >> N;

  rep(i, N) {
    cin >> V >> W >> X >> Y >> Z;
    if (V + W + X + Y + Z < 20) ans++;
  }
  cout << ans << endl;
  return 0;
}