#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<ll> A(N);
  rep(i, N) cin >> A[i];

  rep(i, N) if (A[i] == 0) {
    cout << 0 << endl;
    return 0;
  }

  ll ans = 1;
  rep(i, N) {
    if (1000000000000000000 / A[i] < ans) {
      cout << -1 << endl;
      return 0;
    }
    ans *= A[i];
  }
  cout << ans << endl;
}