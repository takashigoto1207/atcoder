#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int K, S;
  cin >> K >> S;

  ll ans = 0;
  rep(i, K + 1) {
    rep(j, K + 1) {
      if (0 <= S - i - j && S - i - j <= K) ans++;
    }
  }
  cout << ans << endl;
  return 0;
}