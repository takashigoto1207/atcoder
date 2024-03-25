#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, K, A;
  cin >> N >> K;
  vector<bool> Q(K + 1, true);

  rep(i, N) {
    cin >> A;
    if (A <= K) Q[A] = false;
  }
  ll ans = 0;
  rep(i, K + 1) if (Q[i]) ans += i;
  cout << ans << endl;
  return 0;
}