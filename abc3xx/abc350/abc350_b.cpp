#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, Q;
  cin >> N >> Q;

  vector<int> H(N, 1);
  rep(i, Q) {
    int T;
    cin >> T;
    H[T - 1] ^= 1;
  }
  int ans = 0;
  for (auto x : H) ans += x;
  cout << ans << endl;
  return 0;
}