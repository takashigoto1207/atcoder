#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, T;
  cin >> N >> T;

  vector<ll> A(N, 0);
  rep(i, N) cin >> A[i];

  ll ans = 0, open = 0;
  rep(i, N) {
    if (open < A[i]) {
      ans += (A[i] - open);
      open = A[i] + 100;
    }
  }
  ans += max((ll)0, T - open);
  cout << ans << endl;
  return 0;
}