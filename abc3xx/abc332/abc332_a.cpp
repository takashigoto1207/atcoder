#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, S, K, P, Q;
  cin >> N >> S >> K;

  int ans = 0;
  rep(i, N) {
    cin >> P >> Q;
    ans += P * Q;
  }
  if (ans < S) ans += K;
  cout << ans << endl;
  return 0;
}