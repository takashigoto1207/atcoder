#include <bits/stdc++.h>

#include <atcoder/all>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using namespace atcoder;
using ll = long long;

int main() {
  int N, T;
  cin >> N >> T;

  vector<int> C(N), R(N);
  rep(i, N) cin >> C[i];
  rep(i, N) cin >> R[i];

  int mx = 0, ans = 0;
  rep(i, N) if (C[i] == T && R[i] > mx) ans = i + 1, mx = R[i];
  if (ans != 0) {
    cout << ans << endl;
    return 0;
  }

  rep(i, N) if (C[i] == C[0] && R[i] > mx) ans = i + 1, mx = R[i];
  cout << ans << endl;
  return 0;
}